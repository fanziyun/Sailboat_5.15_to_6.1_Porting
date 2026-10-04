// decompiled from mem_buf_msgq by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 472) =====

//WARNING: Switch with 1 destination removed at 0x08001e7c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x34d1c2fe15049aef) {
        if (arg1 < -0x23647790874441c4) {
            if (arg1 == -0x734c9d5197c00ac0) {
                pcVar2 = sym.mem_buf_construct_relinquish_resp.cfi_jt;
            }
            else {
                if (arg1 != -0x31d3d955cd703ba6) goto code_r0x08001e3c;
                pcVar2 = sym.mem_buf_msgq_register.cfi_jt;
            }
        }
        else if (arg1 == -0x23647790874441c4) {
            pcVar2 = sym.mem_buf_init_txn.cfi_jt;
        }
        else if (arg1 == -0xef4825473ba2583) {
            pcVar2 = sym.mem_buf_destroy_txn.cfi_jt;
        }
        else {
            if (arg1 != -0xef3e01bea1a0a55) goto code_r0x08001e3c;
            pcVar2 = sym.mem_buf_construct_relinquish_msg.cfi_jt;
        }
    }
    else if (arg1 < 0x641d19c7be126e92) {
        if (arg1 == 0x34d1c2fe15049aef) {
            pcVar2 = sym.mem_buf_txn_wait.cfi_jt;
            goto code_r0x080011bc;
        }
        if (arg1 != 0x4c550309df1cf4c1) goto code_r0x08001e3c;
        pcVar2 = sym.mem_buf_msgq_unregister.cfi_jt;
    }
    else {
        if (arg1 == 0x641d19c7be126e92) {
            pcVar2 = sym.mem_buf_msgq_recv_fn.a4768755833b20a083223483024b4a8a.cfi_jt;
code_r0x080011bc:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001e3c;
        }
        if (arg1 == 0x694bdb190835f3a8) {
            pcVar2 = sym.mem_buf_construct_alloc_resp.cfi_jt;
        }
        else {
            if (arg1 != 0x7e2d912d48bca6ad) goto code_r0x08001e3c;
            pcVar2 = sym.mem_buf_construct_alloc_req.cfi_jt;
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001e3c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001e90);
    (*pcVar1)();
}


// ===== sym.mem_buf_msgq_register.cfi_jt @ 0x080011e0 (size 8) =====

ulong * sym.mem_buf_msgq_register.cfi_jt(ulong param_1,ulong *param_2)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    ulong *puVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    ulong *puVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar4 = kmem_cache_alloc_trace(___kmalloc,0xdc0,0x78);
    if (puVar4 == NULL) {
        return 0xfffffffffffffff4;
    }
    if ((((param_2 == NULL) || (piVar9 = *param_2, piVar9 == NULL)) || (*piVar9 == 0)) ||
       ((piVar9[1] == 0 || (piVar9[2] == 0)))) {
code_r0x08001844:
        puVar8 = 0xffffffffffffffea;
    }
    else {
        iVar3 = strcmp(param_1,"trusted_vm");
        if (iVar3 == 0) {
            iVar6 = 0;
        }
        else {
            iVar3 = strcmp(param_1,0);
            if (iVar3 != 0) goto code_r0x08001844;
            iVar6 = 1;
        }
        piVar1 = puVar4 + 0xd;
        puVar4[0xd] = piVar1;
        puVar4[0xe] = piVar1;
        uVar7 = param_2[1];
        uVar2 = *(iVar6 * 0x10 + 0x80005a0);
        *puVar4 = piVar9;
        puVar4[1] = uVar7;
        __mutex_init(puVar4 + 2,"&desc->idr_mutex",obj.init_completion.__key);
        puVar4[8] = 0x1000000400000000;
        puVar4[9] = 0;
        puVar4[10] = 0;
        puVar8 = gh_msgq_register(uVar2);
        puVar4[0xb] = puVar8;
        if (puVar8 < 0xfffffffffffff001) {
            mutex_lock(obj.init_completion.__key);
            piVar9 = *0x80001a8;
            uVar5 = __list_add_valid(piVar1,*0x80001a8,obj.mem_buf_msgq_list);
            if ((uVar5 & 1) != 0) {
                *0x80001a8 = piVar1;
                puVar4[0xd] = obj.mem_buf_msgq_list;
                puVar4[0xe] = piVar9;
                *piVar9 = piVar1;
            }
            mutex_unlock(obj.init_completion.__key);
            puVar8 = kthread_create_on_node
                               (sym.mem_buf_msgq_recv_fn.a4768755833b20a083223483024b4a8a.cfi_jt,puVar4,0xffffffff,
                                "mem_buf_%s_rcvr",param_1);
            if (puVar8 < 0xfffffffffffff001) {
                wake_up_process(puVar8);
                puVar4[0xc] = puVar8;
                return puVar4;
            }
            puVar4[0xc] = puVar8;
            _printk(0x80002b8,puVar8);
            gh_msgq_unregister(puVar4[0xb]);
        }
        else {
            _printk(0x80004f0,puVar8);
        }
        idr_destroy(puVar4 + 8);
        kfree(puVar4);
    }
    return puVar8;
}


// ===== sym.mem_buf_construct_alloc_resp.cfi_jt @ 0x080011e8 (size 8) =====

uint * sym.mem_buf_construct_alloc_resp.cfi_jt(uint *param_1,uint param_2,uint param_3,uint param_4)

{
    int64_t iVar1;
    uint uVar2;
    uint *puVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x18);
    if (puVar3 == NULL) {
        puVar3 = 0xfffffffffffffff4;
    }
    else {
        uVar2 = *param_1;
        puVar3[3] = param_2;
        puVar3[4] = param_3;
        puVar3[5] = param_4;
        *puVar3 = uVar2;
        *(puVar3 + 1) = 0x1800000001;
    }
    return puVar3;
}


// ===== sym.mem_buf_txn_wait.cfi_jt @ 0x080011f0 (size 8) =====

int sym.mem_buf_txn_wait.cfi_jt(int64_t param_1,int *param_2)

{
    bool bVar1;
    int iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = wait_for_completion_timeout(param_2 + 2,0x36b);
    mutex_lock(param_1 + 0x10);
    if ((iVar2 == 0) && (uVar3 = try_wait_for_completion(param_2 + 2), (uVar3 & 1) == 0)) {
        _printk(0x800041a,"mem_buf_txn_wait");
        bVar1 = false;
        iVar2 = -0x6e;
    }
    else {
        iVar2 = 0;
        bVar1 = true;
    }
    idr_remove(param_1 + 0x40,*param_2);
    mutex_unlock(param_1 + 0x10);
    if (bVar1) {
        iVar2 = param_2[1];
    }
    return iVar2;
}


// ===== sym.mem_buf_msgq_send.cfi_jt @ 0x080011f8 (size 8) =====

int sym.mem_buf_msgq_send.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 4) < 4) {
        iVar1 = gh_msgq_send(*(param_1 + 0x58),param_2,*(param_2 + 8),0);
        if (iVar1 < 0) {
            _printk(0x8000330,"mem_buf_msgq_send",iVar1);
        }
    }
    else {
        _printk(0x8000303);
        iVar1 = -0x16;
    }
    return iVar1;
}


// ===== sym.mem_buf_construct_alloc_req.cfi_jt @ 0x08001200 (size 8) =====

uint * sym.mem_buf_construct_alloc_req.cfi_jt
                 (uint *param_1,ulong param_2,uint32_t *param_3,int param_4,ulong param_5,uint param_6)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint uVar3;
    uint *puVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *param_3;
    uVar3 = *param_1;
    iVar5 = uVar2 * 4;
    iVar1 = iVar5 + 0x20 + (param_4 == 1) * 0x80;
    puVar4 = __kmalloc(iVar1,0xdc0);
    if (puVar4 == NULL) {
        puVar4 = 0xfffffffffffffff4;
    }
    else {
        *puVar4 = uVar3;
        puVar4[1] = 0;
        puVar4[2] = iVar1;
        *(puVar4 + 3) = param_2;
        puVar4[5] = param_4;
        puVar4[6] = param_6;
        memcpy(puVar4 + 7,param_3,iVar5 + 4);
        if (param_4 == 1) {
            strscpy(puVar4 + uVar2 + 8,param_5,0x80);
        }
    }
    return puVar4;
}


// ===== sym.mem_buf_init_txn.cfi_jt @ 0x08001208 (size 8) =====

int * sym.mem_buf_init_txn.cfi_jt(int64_t param_1,ulong param_2)

{
    int64_t iVar1;
    int iVar2;
    int *piVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    piVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x30);
    if (piVar3 == NULL) {
        piVar3 = 0xfffffffffffffff4;
    }
    else {
        iVar1 = param_1 + 0x10;
        mutex_lock(iVar1);
        iVar2 = idr_alloc_cyclic(param_1 + 0x40,piVar3,0,0x7fffffff,0xcc0);
        if (iVar2 < 0) {
            _printk(0x80004c0,"mem_buf_init_txn",iVar2);
            mutex_unlock(iVar1);
            kfree(piVar3);
            piVar3 = iVar2;
        }
        else {
            *piVar3 = iVar2;
            piVar3[2] = 0;
            __init_swait_queue_head(piVar3 + 4,"&x->wait",obj.init_completion.__key);
            *(piVar3 + 10) = param_2;
            mutex_unlock(iVar1);
        }
    }
    return piVar3;
}


// ===== sym.mem_buf_destroy_txn.cfi_jt @ 0x08001210 (size 8) =====

void sym.mem_buf_destroy_txn.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(param_2);
    return;
}


// ===== sym.mem_buf_construct_relinquish_msg.cfi_jt @ 0x08001218 (size 8) =====

uint * sym.mem_buf_construct_relinquish_msg.cfi_jt(uint *param_1,uint param_2,uint param_3)

{
    int64_t iVar1;
    uint uVar2;
    uint *puVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
    if (puVar3 == NULL) {
        puVar3 = 0xfffffffffffffff4;
    }
    else {
        uVar2 = *param_1;
        puVar3[3] = param_3;
        puVar3[4] = param_2;
        *puVar3 = uVar2;
        *(puVar3 + 1) = 0x1400000002;
    }
    return puVar3;
}


// ===== sym.mem_buf_construct_relinquish_resp.cfi_jt @ 0x08001220 (size 8) =====

uint * sym.mem_buf_construct_relinquish_resp.cfi_jt(uint *param_1)

{
    int64_t iVar1;
    uint *puVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
    if (puVar2 == NULL) {
        puVar2 = 0xfffffffffffffff4;
    }
    else {
        *puVar2 = *param_1;
        *(puVar2 + 1) = 0x1400000003;
    }
    return puVar2;
}


// ===== sym.mem_buf_msgq_recv_fn.a4768755833b20a083223483024b4a8a.cfi_jt @ 0x08001228 (size 8) =====

void sym.mem_buf_msgq_recv_fn.a4768755833b20a083223483024b4a8a.cfi_jt(int64_t *param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    uint *arg2;
    uint64_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    char *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar10;
    ulong unaff_x30;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    uStack_70 = 0;
    arg2 = kmem_cache_alloc_trace(___kmalloc,0xdc0,0xf0);
    if (arg2 == NULL) {
        uVar7 = 0xfffffff4;
    }
    else {
        uVar6 = kthread_should_stop();
        if ((uVar6 & 1) == 0) {
            do {
                iVar4 = gh_msgq_recv(param_1[0xb],arg2,0xf0,&uStack_70,0);
                uVar6 = uStack_70;
                if (iVar4 < 0) {
                    iVar3 = ___ratelimit(obj.mem_buf_msgq_recv_fn._rs,"mem_buf_msgq_recv_fn");
                    if (iVar3 != 0) {
                        uVar7 = 0x8000390;
                        pcVar9 = "mem_buf_msgq_recv_fn";
code_r0x08001c20:
                        _printk(uVar7,pcVar9,iVar4);
                    }
                    goto code_r0x08001a94;
                }
                if ((uStack_70 < 0xc) || (uStack_70 != arg2[2])) {
                    _printk(0x8000465,"mem_buf_process_msg",uStack_70);
                    goto code_r0x08001a94;
                }
                iVar4 = arg2[1];
                switch(iVar4) {
                case 0:
                    uVar7 = 0x80001e0;
                    pcVar10 = **param_1;
                    goto code_r0x08001ba8;
                case 1:
                    mutex_lock(param_1 + 2);
                    iVar8 = idr_find(param_1 + 8,*arg2);
                    if (iVar8 == 0) {
                        _printk(0x800049c,"mem_buf_process_alloc_resp",*arg2);
                        if (arg2[3] == 0) {
                            pcVar10 = *(*param_1 + 0x18);
                            __cfi_slowpath_diag(0xcc63d176e7105d2f,pcVar10,0x8000220);
                            (*pcVar10)(param_1[1],arg2[5],arg2[4]);
                        }
                    }
                    else {
                        pcVar10 = *(*param_1 + 8);
                        __cfi_slowpath_diag(0xa6c66978fb74941b,pcVar10,0x8000240);
                        uVar5 = (*pcVar10)(param_1[1],arg2,uVar6,*(iVar8 + 0x28));
                        *(iVar8 + 4) = uVar5;
                        complete(iVar8 + 8);
                    }
                    mutex_unlock(param_1 + 2);
                    break;
                case 2:
                    uVar7 = 0x8000200;
                    pcVar10 = *(*param_1 + 0x10);
code_r0x08001ba8:
                    __cfi_slowpath_diag(0x1871a4ba1e253e55,pcVar10,uVar7);
                    (*pcVar10)(param_1[1],arg2,uVar6);
                    break;
                case 3:
                    sym.mem_buf_process_relinquish_resp(param_1,arg2,uStack_70);
                    break;
                default:
                    uVar7 = 0x80003ee;
                    pcVar9 = "mem_buf_process_msg";
                    goto code_r0x08001c20;
                }
code_r0x08001a94:
                uVar6 = kthread_should_stop();
            } while ((uVar6 & 1) == 0);
        }
        kfree(arg2);
        uVar7 = 0;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_68) {
        iVar8 = __stack_chk_fail(uVar7);
        *extraout_x18 = sym.mem_buf_msgq_unregister;
        kthread_stop(*(iVar8 + 0x60));
        mutex_lock(obj.init_completion.__key);
        uVar6 = __list_del_entry_valid(iVar8 + 0x68);
        if ((uVar6 & 1) != 0) {
            iVar1 = *(iVar8 + 0x68);
            piVar2 = *(iVar8 + 0x70);
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *(iVar8 + 0x68) = 0xdead000000000100;
        *(iVar8 + 0x70) = 0xdead000000000122;
        mutex_unlock(obj.init_completion.__key);
        gh_msgq_unregister(*(iVar8 + 0x58));
        idr_destroy(iVar8 + 0x40);
        kfree(iVar8);
        return;
    }
    return;
}


// ===== sym.mem_buf_retrieve_txn_id.cfi_jt @ 0x08001230 (size 8) =====

uint sym.mem_buf_retrieve_txn_id.cfi_jt(uint *param_1)

{
    return *param_1;
}


// ===== sym.mem_buf_msgq_unregister.cfi_jt @ 0x08001238 (size 8) =====

void sym.mem_buf_msgq_unregister.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kthread_stop(*(param_1 + 0x60));
    mutex_lock(obj.init_completion.__key);
    uVar3 = __list_del_entry_valid(param_1 + 0x68);
    if ((uVar3 & 1) != 0) {
        iVar1 = *(param_1 + 0x68);
        piVar2 = *(param_1 + 0x70);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *(param_1 + 0x68) = 0xdead000000000100;
    *(param_1 + 0x70) = 0xdead000000000122;
    mutex_unlock(obj.init_completion.__key);
    gh_msgq_unregister(*(param_1 + 0x58));
    idr_destroy(param_1 + 0x40);
    kfree(param_1);
    return;
}


// ===== sym.mem_buf_construct_alloc_req @ 0x08001240 (size 324) =====

uint * sym.mem_buf_construct_alloc_req(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint uVar3;
    uint *puVar4;
    uint in_w5;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *arg3;
    uVar3 = *arg1;
    iVar5 = uVar2 * 4;
    iVar1 = iVar5 + 0x20 + (arg4 == 1) * 0x80;
    puVar4 = __kmalloc(iVar1,0xdc0);
    if (puVar4 == NULL) {
        puVar4 = 0xfffffffffffffff4;
    }
    else {
        *puVar4 = uVar3;
        puVar4[1] = 0;
        puVar4[2] = iVar1;
        *(puVar4 + 3) = arg2;
        puVar4[5] = arg4;
        puVar4[6] = in_w5;
        memcpy(puVar4 + 7,arg3,iVar5 + 4);
        if (arg4 == 1) {
            strscpy(puVar4 + uVar2 + 8);
        }
    }
    return puVar4;
}


// ===== sym.mem_buf_construct_alloc_resp @ 0x08001394 (size 156) =====

uint * sym.mem_buf_construct_alloc_resp(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint uVar2;
    uint *puVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x18);
    if (puVar3 == NULL) {
        puVar3 = 0xfffffffffffffff4;
    }
    else {
        uVar2 = *arg1;
        puVar3[3] = arg2;
        puVar3[4] = arg3;
        puVar3[5] = arg4;
        *puVar3 = uVar2;
        *(puVar3 + 1) = 0x1800000001;
    }
    return puVar3;
}


// ===== sym.mem_buf_construct_relinquish_msg @ 0x08001430 (size 148) =====

uint * sym.mem_buf_construct_relinquish_msg(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint uVar2;
    uint *puVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
    if (puVar3 == NULL) {
        puVar3 = 0xfffffffffffffff4;
    }
    else {
        uVar2 = *arg1;
        puVar3[3] = arg3;
        puVar3[4] = arg2;
        *puVar3 = uVar2;
        *(puVar3 + 1) = 0x1400000002;
    }
    return puVar3;
}


// ===== sym.mem_buf_construct_relinquish_resp @ 0x080014c4 (size 128) =====

uint * sym.mem_buf_construct_relinquish_resp(int64_t arg1)

{
    int64_t iVar1;
    uint *puVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
    if (puVar2 == NULL) {
        puVar2 = 0xfffffffffffffff4;
    }
    else {
        *puVar2 = *arg1;
        *(puVar2 + 1) = 0x1400000003;
    }
    return puVar2;
}


// ===== sym.mem_buf_retrieve_txn_id @ 0x08001544 (size 16) =====

uint sym.mem_buf_retrieve_txn_id(int64_t arg1)

{
    return *arg1;
}


// ===== sym.mem_buf_init_txn @ 0x08001554 (size 264) =====

int * sym.mem_buf_init_txn(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    int *piVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    piVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x30);
    if (piVar3 == NULL) {
        piVar3 = 0xfffffffffffffff4;
    }
    else {
        iVar1 = arg1 + 0x10;
        mutex_lock(iVar1);
        iVar2 = idr_alloc_cyclic(arg1 + 0x40,piVar3,0,0x7fffffff,0xcc0);
        if (iVar2 < 0) {
            _printk(0x80004c0,"mem_buf_init_txn",iVar2);
            mutex_unlock(iVar1);
            kfree(piVar3);
            piVar3 = iVar2;
        }
        else {
            *piVar3 = iVar2;
            piVar3[2] = 0;
            __init_swait_queue_head(piVar3 + 4,"&x->wait",obj.init_completion.__key);
            *(piVar3 + 10) = arg2;
            mutex_unlock(iVar1);
        }
    }
    return piVar3;
}


// ===== sym.mem_buf_msgq_send @ 0x0800165c (size 128) =====

int sym.mem_buf_msgq_send(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg2 + 4) < 4) {
        iVar1 = gh_msgq_send(*(arg1 + 0x58),arg2,*(arg2 + 8),0);
        if (iVar1 < 0) {
            _printk(0x8000330,"mem_buf_msgq_send",iVar1);
        }
    }
    else {
        _printk(0x8000303);
        iVar1 = -0x16;
    }
    return iVar1;
}


// ===== sym.mem_buf_txn_wait @ 0x080016dc (size 184) =====

uint sym.mem_buf_txn_wait(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    int iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    uint uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = wait_for_completion_timeout(arg2 + 8,0x36b);
    mutex_lock(arg1 + 0x10);
    if ((iVar2 == 0) && (uVar3 = try_wait_for_completion(arg2 + 8), (uVar3 & 1) == 0)) {
        _printk(0x800041a,"mem_buf_txn_wait");
        bVar1 = false;
        uVar4 = 0xffffff92;
    }
    else {
        uVar4 = 0;
        bVar1 = true;
    }
    idr_remove(arg1 + 0x40,*arg2);
    mutex_unlock(arg1 + 0x10);
    if (bVar1) {
        uVar4 = *(arg2 + 4);
    }
    return uVar4;
}


// ===== sym.mem_buf_destroy_txn @ 0x08001794 (size 40) =====

void sym.mem_buf_destroy_txn(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(arg1);
    return;
}


// ===== sym.mem_buf_msgq_register @ 0x080017bc (size 496) =====

ulong * sym.mem_buf_msgq_register(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    ulong *puVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    ulong *puVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar4 = kmem_cache_alloc_trace(___kmalloc,0xdc0,0x78);
    if (puVar4 == NULL) {
        return 0xfffffffffffffff4;
    }
    if ((((arg2 == 0) || (piVar9 = *arg2, piVar9 == NULL)) || (*piVar9 == 0)) || ((piVar9[1] == 0 || (piVar9[2] == 0)))
       ) {
code_r0x08001844:
        puVar8 = 0xffffffffffffffea;
    }
    else {
        iVar3 = strcmp(arg1,"trusted_vm");
        if (iVar3 == 0) {
            iVar6 = 0;
        }
        else {
            iVar3 = strcmp(arg1,0);
            if (iVar3 != 0) goto code_r0x08001844;
            iVar6 = 1;
        }
        piVar1 = puVar4 + 0xd;
        puVar4[0xd] = piVar1;
        puVar4[0xe] = piVar1;
        uVar7 = *(arg2 + 8);
        uVar2 = *(iVar6 * 0x10 + 0x80005a0);
        *puVar4 = piVar9;
        puVar4[1] = uVar7;
        __mutex_init(puVar4 + 2,"&desc->idr_mutex",obj.init_completion.__key);
        puVar4[8] = 0x1000000400000000;
        puVar4[9] = 0;
        puVar4[10] = 0;
        puVar8 = gh_msgq_register(uVar2);
        puVar4[0xb] = puVar8;
        if (puVar8 < 0xfffffffffffff001) {
            mutex_lock(obj.init_completion.__key);
            piVar9 = *0x80001a8;
            uVar5 = __list_add_valid(piVar1,*0x80001a8,obj.mem_buf_msgq_list);
            if ((uVar5 & 1) != 0) {
                *0x80001a8 = piVar1;
                puVar4[0xd] = obj.mem_buf_msgq_list;
                puVar4[0xe] = piVar9;
                *piVar9 = piVar1;
            }
            mutex_unlock(obj.init_completion.__key);
            puVar8 = kthread_create_on_node
                               (sym.mem_buf_msgq_recv_fn.a4768755833b20a083223483024b4a8a.cfi_jt,puVar4,0xffffffff,
                                "mem_buf_%s_rcvr",arg1);
            if (puVar8 < 0xfffffffffffff001) {
                wake_up_process(puVar8);
                puVar4[0xc] = puVar8;
                return puVar4;
            }
            puVar4[0xc] = puVar8;
            _printk(0x80002b8,puVar8);
            gh_msgq_unregister(puVar4[0xb]);
        }
        else {
            _printk(0x80004f0,puVar8);
        }
        idr_destroy(puVar4 + 8);
        kfree(puVar4);
    }
    return puVar8;
}


// ===== sym.mem_buf_msgq_recv_fn @ 0x080019ac (size 728) =====

void sym.mem_buf_msgq_recv_fn(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    uint *arg2;
    uint64_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    char *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar10;
    ulong unaff_x30;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    uStack_70 = 0;
    arg2 = kmem_cache_alloc_trace(___kmalloc,0xdc0,0xf0);
    if (arg2 == NULL) {
        uVar7 = 0xfffffff4;
    }
    else {
        uVar6 = kthread_should_stop();
        if ((uVar6 & 1) == 0) {
            do {
                iVar4 = gh_msgq_recv(*(arg1 + 0x58),arg2,0xf0,&uStack_70,0);
                uVar6 = uStack_70;
                if (iVar4 < 0) {
                    iVar3 = ___ratelimit(obj.mem_buf_msgq_recv_fn._rs,"mem_buf_msgq_recv_fn");
                    if (iVar3 != 0) {
                        uVar7 = 0x8000390;
                        pcVar9 = "mem_buf_msgq_recv_fn";
code_r0x08001c20:
                        _printk(uVar7,pcVar9,iVar4);
                    }
                    goto code_r0x08001a94;
                }
                if ((uStack_70 < 0xc) || (uStack_70 != arg2[2])) {
                    _printk(0x8000465,"mem_buf_process_msg",uStack_70);
                    goto code_r0x08001a94;
                }
                iVar4 = arg2[1];
    //switch table (3 cases) at 0x8000260
                switch(iVar4) {
                case 0:
                    uVar7 = 0x80001e0;
                    pcVar10 = **arg1;
                    goto code_r0x08001ba8;
                case 1:
                    mutex_lock(arg1 + 0x10);
                    iVar8 = idr_find(arg1 + 0x40,*arg2);
                    if (iVar8 == 0) {
                        _printk(0x800049c,"mem_buf_process_alloc_resp",*arg2);
                        if (arg2[3] == 0) {
                            pcVar10 = *(*arg1 + 0x18);
                            __cfi_slowpath_diag(0xcc63d176e7105d2f,pcVar10,0x8000220);
                            (*pcVar10)(*(arg1 + 8),arg2[5],arg2[4]);
                        }
                    }
                    else {
                        pcVar10 = *(*arg1 + 8);
                        __cfi_slowpath_diag(0xa6c66978fb74941b,pcVar10,0x8000240);
                        uVar5 = (*pcVar10)(*(arg1 + 8),arg2,uVar6,*(iVar8 + 0x28));
                        *(iVar8 + 4) = uVar5;
                        complete(iVar8 + 8);
                    }
                    mutex_unlock(arg1 + 0x10);
                    break;
                case 2:
                    uVar7 = 0x8000200;
                    pcVar10 = *(*arg1 + 0x10);
code_r0x08001ba8:
                    __cfi_slowpath_diag(0x1871a4ba1e253e55,pcVar10,uVar7);
                    (*pcVar10)(*(arg1 + 8),arg2,uVar6);
                    break;
                case 3:
                    sym.mem_buf_process_relinquish_resp(arg1,arg2,uStack_70);
                    break;
                default:
                    uVar7 = 0x80003ee;
                    pcVar9 = "mem_buf_process_msg";
                    goto code_r0x08001c20;
                }
code_r0x08001a94:
                uVar6 = kthread_should_stop();
            } while ((uVar6 & 1) == 0);
        }
        kfree(arg2);
        uVar7 = 0;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_68) {
        iVar8 = __stack_chk_fail(uVar7);
        *extraout_x18 = sym.mem_buf_msgq_unregister;
        kthread_stop(*(iVar8 + 0x60));
        mutex_lock(obj.init_completion.__key);
        uVar6 = __list_del_entry_valid(iVar8 + 0x68);
        if ((uVar6 & 1) != 0) {
            iVar1 = *(iVar8 + 0x68);
            piVar2 = *(iVar8 + 0x70);
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *(iVar8 + 0x68) = 0xdead000000000100;
        *(iVar8 + 0x70) = 0xdead000000000122;
        mutex_unlock(obj.init_completion.__key);
        gh_msgq_unregister(*(iVar8 + 0x58));
        idr_destroy(iVar8 + 0x40);
        kfree(iVar8);
        return;
    }
    return;
}


// ===== sym.mem_buf_msgq_unregister @ 0x08001c84 (size 144) =====

void sym.mem_buf_msgq_unregister(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kthread_stop(*(arg1 + 0x60));
    mutex_lock(obj.init_completion.__key);
    uVar3 = __list_del_entry_valid(arg1 + 0x68);
    if ((uVar3 & 1) != 0) {
        iVar1 = *(arg1 + 0x68);
        piVar2 = *(arg1 + 0x70);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *(arg1 + 0x68) = 0xdead000000000100;
    *(arg1 + 0x70) = 0xdead000000000122;
    mutex_unlock(obj.init_completion.__key);
    gh_msgq_unregister(*(arg1 + 0x58));
    idr_destroy(arg1 + 0x40);
    kfree(arg1);
    return;
}


// ===== sym.mem_buf_process_relinquish_resp @ 0x08001d14 (size 164) =====

void sym.mem_buf_process_relinquish_resp(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg3 == 0x14) {
        mutex_lock(arg1 + 0x10);
        iVar1 = idr_find(arg1 + 0x40,*arg2);
        if (iVar1 == 0) {
            _printk(0x800049c,"mem_buf_process_relinquish_resp",*arg2);
        }
        else {
            complete(iVar1 + 8);
        }
        mutex_unlock(arg1 + 0x10);
    }
    else {
        _printk(0x8000269,"mem_buf_process_relinquish_resp");
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001e38 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001e7c

void sym.__cfi_check_fail(int64_t arg1)

{
    code *pcVar1;
    ulong in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        if (4 < *arg1) {
            return;
        }
    //switch table (4 cases) at 0x8000264
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001e90);
    (*pcVar1)();
}

