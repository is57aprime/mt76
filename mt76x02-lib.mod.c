#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_DATA(mt76x02_rates, "_gpl", "");
KSYMTAB_FUNC(mt76x02_init_device, "_gpl", "");
KSYMTAB_FUNC(mt76x02_configure_filter, "_gpl", "");
KSYMTAB_FUNC(mt76x02_sta_add, "_gpl", "");
KSYMTAB_FUNC(mt76x02_sta_remove, "_gpl", "");
KSYMTAB_FUNC(mt76x02_add_interface, "_gpl", "");
KSYMTAB_FUNC(mt76x02_remove_interface, "_gpl", "");
KSYMTAB_FUNC(mt76x02_ampdu_action, "_gpl", "");
KSYMTAB_FUNC(mt76x02_set_key, "_gpl", "");
KSYMTAB_FUNC(mt76x02_conf_tx, "_gpl", "");
KSYMTAB_FUNC(mt76x02_set_tx_ackto, "_gpl", "");
KSYMTAB_FUNC(mt76x02_set_coverage_class, "_gpl", "");
KSYMTAB_FUNC(mt76x02_set_rts_threshold, "_gpl", "");
KSYMTAB_FUNC(mt76x02_sta_rate_tbl_update, "_gpl", "");
KSYMTAB_FUNC(mt76x02_remove_hdr_pad, "_gpl", "");
KSYMTAB_FUNC(mt76x02_sw_scan_complete, "_gpl", "");
KSYMTAB_FUNC(mt76x02_sta_ps, "_gpl", "");
KSYMTAB_FUNC(mt76x02_bss_info_changed, "_gpl", "");
KSYMTAB_FUNC(mt76x02_config_mac_addr_list, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mac_reset_counters, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mac_shared_key_setup, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mac_wcid_setup, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mac_write_txwi, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mac_setaddr, "_gpl", "");
KSYMTAB_FUNC(mt76x02_tx_complete_skb, "_gpl", "");
KSYMTAB_FUNC(mt76x02_update_channel, "_gpl", "");
KSYMTAB_FUNC(mt76x02_edcca_init, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mac_cc_reset, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mcu_parse_response, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mcu_msg_send, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mcu_function_select, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mcu_set_radio_state, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mcu_calibrate, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mcu_cleanup, "_gpl", "");
KSYMTAB_FUNC(mt76x02_set_ethtool_fwver, "_gpl", "");
KSYMTAB_FUNC(mt76x02_eeprom_copy, "_gpl", "");
KSYMTAB_FUNC(mt76x02_get_efuse_data, "_gpl", "");
KSYMTAB_FUNC(mt76x02_eeprom_parse_hw_cap, "_gpl", "");
KSYMTAB_FUNC(mt76x02_ext_pa_enabled, "_gpl", "");
KSYMTAB_FUNC(mt76x02_get_rx_gain, "_gpl", "");
KSYMTAB_FUNC(mt76x02_get_lna_gain, "_gpl", "");
KSYMTAB_FUNC(mt76x02_phy_set_rxpath, "_gpl", "");
KSYMTAB_FUNC(mt76x02_phy_set_txdac, "_gpl", "");
KSYMTAB_FUNC(mt76x02_get_max_rate_power, "_gpl", "");
KSYMTAB_FUNC(mt76x02_limit_rate_power, "_gpl", "");
KSYMTAB_FUNC(mt76x02_add_rate_power_offset, "_gpl", "");
KSYMTAB_FUNC(mt76x02_phy_set_txpower, "_gpl", "");
KSYMTAB_FUNC(mt76x02_phy_set_bw, "_gpl", "");
KSYMTAB_FUNC(mt76x02_phy_set_band, "_gpl", "");
KSYMTAB_FUNC(mt76x02_phy_adjust_vga_gain, "_gpl", "");
KSYMTAB_FUNC(mt76x02_init_agc_gain, "_gpl", "");
KSYMTAB_FUNC(mt76x02e_init_beacon_config, "_gpl", "");
KSYMTAB_FUNC(mt76x02_dma_init, "_gpl", "");
KSYMTAB_FUNC(mt76x02_rx_poll_complete, "_gpl", "");
KSYMTAB_FUNC(mt76x02_irq_handler, "_gpl", "");
KSYMTAB_FUNC(mt76x02_dma_disable, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mac_start, "_gpl", "");
KSYMTAB_FUNC(mt76x02_reconfig_complete, "_gpl", "");
KSYMTAB_FUNC(mt76x02_tx, "_gpl", "");
KSYMTAB_FUNC(mt76x02_queue_rx_skb, "_gpl", "");
KSYMTAB_FUNC(mt76x02_tx_set_txpwr_auto, "_gpl", "");
KSYMTAB_FUNC(mt76x02_tx_status_data, "_gpl", "");
KSYMTAB_FUNC(mt76x02_tx_prepare_skb, "_gpl", "");
KSYMTAB_FUNC(mt76x02_init_debugfs, "_gpl", "");
KSYMTAB_FUNC(mt76x02_phy_dfs_adjust_agc, "_gpl", "");
KSYMTAB_FUNC(mt76x02_dfs_init_params, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mac_set_beacon, "_gpl", "");
KSYMTAB_FUNC(mt76x02_resync_beacon_timer, "_gpl", "");
KSYMTAB_FUNC(mt76x02_update_beacon_iter, "_gpl", "");
KSYMTAB_FUNC(mt76x02_enqueue_buffered_bc, "_gpl", "");
KSYMTAB_FUNC(mt76x02_init_beacon_config, "_gpl", "");

SYMBOL_CRC(mt76x02_rates, 0xa9967f5a, "_gpl");
SYMBOL_CRC(mt76x02_init_device, 0xa84c96b3, "_gpl");
SYMBOL_CRC(mt76x02_configure_filter, 0x2088b784, "_gpl");
SYMBOL_CRC(mt76x02_sta_add, 0x876763b3, "_gpl");
SYMBOL_CRC(mt76x02_sta_remove, 0x01f20d7f, "_gpl");
SYMBOL_CRC(mt76x02_add_interface, 0x63e83916, "_gpl");
SYMBOL_CRC(mt76x02_remove_interface, 0x9b421662, "_gpl");
SYMBOL_CRC(mt76x02_ampdu_action, 0x430d3af8, "_gpl");
SYMBOL_CRC(mt76x02_set_key, 0xbfa333f2, "_gpl");
SYMBOL_CRC(mt76x02_conf_tx, 0x882af149, "_gpl");
SYMBOL_CRC(mt76x02_set_tx_ackto, 0x4c28f930, "_gpl");
SYMBOL_CRC(mt76x02_set_coverage_class, 0x214c7079, "_gpl");
SYMBOL_CRC(mt76x02_set_rts_threshold, 0xfb825c75, "_gpl");
SYMBOL_CRC(mt76x02_sta_rate_tbl_update, 0xc031cef0, "_gpl");
SYMBOL_CRC(mt76x02_remove_hdr_pad, 0x61c3386c, "_gpl");
SYMBOL_CRC(mt76x02_sw_scan_complete, 0x9b421662, "_gpl");
SYMBOL_CRC(mt76x02_sta_ps, 0x7375e7c1, "_gpl");
SYMBOL_CRC(mt76x02_bss_info_changed, 0xeba799da, "_gpl");
SYMBOL_CRC(mt76x02_config_mac_addr_list, 0x4c28f930, "_gpl");
SYMBOL_CRC(mt76x02_mac_reset_counters, 0x357b42e6, "_gpl");
SYMBOL_CRC(mt76x02_mac_shared_key_setup, 0x5cc19aeb, "_gpl");
SYMBOL_CRC(mt76x02_mac_wcid_setup, 0x304a8dd9, "_gpl");
SYMBOL_CRC(mt76x02_mac_write_txwi, 0xb2f66f9f, "_gpl");
SYMBOL_CRC(mt76x02_mac_setaddr, 0x761da179, "_gpl");
SYMBOL_CRC(mt76x02_tx_complete_skb, 0x818da1dc, "_gpl");
SYMBOL_CRC(mt76x02_update_channel, 0xb0a500a7, "_gpl");
SYMBOL_CRC(mt76x02_edcca_init, 0x357b42e6, "_gpl");
SYMBOL_CRC(mt76x02_mac_cc_reset, 0x357b42e6, "_gpl");
SYMBOL_CRC(mt76x02_mcu_parse_response, 0x9f8671cb, "_gpl");
SYMBOL_CRC(mt76x02_mcu_msg_send, 0x82a24f1e, "_gpl");
SYMBOL_CRC(mt76x02_mcu_function_select, 0xbf3a09bb, "_gpl");
SYMBOL_CRC(mt76x02_mcu_set_radio_state, 0xb30ab93b, "_gpl");
SYMBOL_CRC(mt76x02_mcu_calibrate, 0x2fa3f7aa, "_gpl");
SYMBOL_CRC(mt76x02_mcu_cleanup, 0xa84c96b3, "_gpl");
SYMBOL_CRC(mt76x02_set_ethtool_fwver, 0x6d887e8e, "_gpl");
SYMBOL_CRC(mt76x02_eeprom_copy, 0x87ffdd84, "_gpl");
SYMBOL_CRC(mt76x02_get_efuse_data, 0x8197acd0, "_gpl");
SYMBOL_CRC(mt76x02_eeprom_parse_hw_cap, 0x4c28f930, "_gpl");
SYMBOL_CRC(mt76x02_ext_pa_enabled, 0x4239cfcb, "_gpl");
SYMBOL_CRC(mt76x02_get_rx_gain, 0x44b5b037, "_gpl");
SYMBOL_CRC(mt76x02_get_lna_gain, 0xbbe4aa3d, "_gpl");
SYMBOL_CRC(mt76x02_phy_set_rxpath, 0x4c28f930, "_gpl");
SYMBOL_CRC(mt76x02_phy_set_txdac, 0x4c28f930, "_gpl");
SYMBOL_CRC(mt76x02_get_max_rate_power, 0x3014d425, "_gpl");
SYMBOL_CRC(mt76x02_limit_rate_power, 0x725351d9, "_gpl");
SYMBOL_CRC(mt76x02_add_rate_power_offset, 0xaef31978, "_gpl");
SYMBOL_CRC(mt76x02_phy_set_txpower, 0xc598a803, "_gpl");
SYMBOL_CRC(mt76x02_phy_set_bw, 0x1177cac1, "_gpl");
SYMBOL_CRC(mt76x02_phy_set_band, 0x45044077, "_gpl");
SYMBOL_CRC(mt76x02_phy_adjust_vga_gain, 0x3db4bd01, "_gpl");
SYMBOL_CRC(mt76x02_init_agc_gain, 0x4c28f930, "_gpl");
SYMBOL_CRC(mt76x02e_init_beacon_config, 0x357b42e6, "_gpl");
SYMBOL_CRC(mt76x02_dma_init, 0xba044245, "_gpl");
SYMBOL_CRC(mt76x02_rx_poll_complete, 0x7b542cbe, "_gpl");
SYMBOL_CRC(mt76x02_irq_handler, 0x9a424296, "_gpl");
SYMBOL_CRC(mt76x02_dma_disable, 0x357b42e6, "_gpl");
SYMBOL_CRC(mt76x02_mac_start, 0x357b42e6, "_gpl");
SYMBOL_CRC(mt76x02_reconfig_complete, 0x624a6757, "_gpl");
SYMBOL_CRC(mt76x02_tx, 0xca708229, "_gpl");
SYMBOL_CRC(mt76x02_queue_rx_skb, 0x71e24504, "_gpl");
SYMBOL_CRC(mt76x02_tx_set_txpwr_auto, 0x7d06ce6d, "_gpl");
SYMBOL_CRC(mt76x02_tx_status_data, 0x22ded06e, "_gpl");
SYMBOL_CRC(mt76x02_tx_prepare_skb, 0x8a30e615, "_gpl");
SYMBOL_CRC(mt76x02_init_debugfs, 0x4c28f930, "_gpl");
SYMBOL_CRC(mt76x02_phy_dfs_adjust_agc, 0x4c28f930, "_gpl");
SYMBOL_CRC(mt76x02_dfs_init_params, 0x4c28f930, "_gpl");
SYMBOL_CRC(mt76x02_mac_set_beacon, 0xa778a839, "_gpl");
SYMBOL_CRC(mt76x02_resync_beacon_timer, 0x4c28f930, "_gpl");
SYMBOL_CRC(mt76x02_update_beacon_iter, 0x82057247, "_gpl");
SYMBOL_CRC(mt76x02_enqueue_buffered_bc, 0xa2b37555, "_gpl");
SYMBOL_CRC(mt76x02_init_beacon_config, 0x4c28f930, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x82fb052a, "ieee80211_sta_register_airtime" },
	{ 0xf8414c19, "mt76_dma_rx_poll" },
	{ 0x1bb9bfab, "mt76_tx_status_unlock" },
	{ 0xf541d690, "simple_attr_open" },
	{ 0x5b12a9a8, "debugfs_attr_write" },
	{ 0xbf9c33b7, "devm_kmalloc" },
	{ 0xd272d446, "__rcu_read_lock" },
	{ 0x0d8b8609, "consume_skb" },
	{ 0xa53f4e29, "memmove" },
	{ 0x40a621c5, "snprintf" },
	{ 0x18250048, "mt76_tx_status_skb_get" },
	{ 0xe24974bd, "trace_raw_output_prep" },
	{ 0x7e8b5a27, "mt76_mcu_msg_alloc" },
	{ 0x1bb9bfab, "mt76_tx_status_lock" },
	{ 0x7569f618, "skb_dequeue" },
	{ 0x4fc539a3, "__trace_trigger_soft_disabled" },
	{ 0xcd43ac71, "trace_event_printf" },
	{ 0xbd03ed67, "this_cpu_off" },
	{ 0x92cef2e6, "mt76_csa_check" },
	{ 0x316f0153, "mt76_tx_status_skb_add" },
	{ 0x9fa91036, "__tracepoint_mac_txdone" },
	{ 0xc4f23845, "mt76_tx_check_agg_ssn" },
	{ 0x8cf5c30c, "ieee80211_tx_status_ext" },
	{ 0x05ebf6f7, "mt76_stop_tx_queues" },
	{ 0x603d30e3, "___pskb_trim" },
	{ 0x27f56809, "trace_event_raw_init" },
	{ 0xa53f4e29, "memcpy" },
	{ 0x4b4ef2ab, "__mt76_tx_complete_skb" },
	{ 0x5d3be6f8, "pcpu_hot" },
	{ 0x388dee05, "seq_lseek" },
	{ 0x28a786c6, "netif_napi_add_weight_locked" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0x185931d9, "ieee80211_restart_hw" },
	{ 0x61196007, "bpf_trace_run2" },
	{ 0x6794f592, "ieee80211_get_hdrlen_from_skb" },
	{ 0xd8248fc3, "kthread_park" },
	{ 0x00e62fcb, "mt76_mcu_rx_event" },
	{ 0xde338d9a, "_raw_spin_lock" },
	{ 0xd272d446, "__fentry__" },
	{ 0x353fef8f, "mt76_tx_status_check" },
	{ 0xbe0bf0cb, "wake_up_process" },
	{ 0x9f66d3bb, "trace_event_buffer_commit" },
	{ 0x5f314d15, "ieee80211_get_buffered_bc" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x2ff9b4e7, "napi_complete_done" },
	{ 0xd7f03428, "ieee80211_get_tx_rates" },
	{ 0x363fa8f4, "ieee80211_send_bar" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x0f4bde61, "debugfs_create_devm_seqfile" },
	{ 0xde338d9a, "_raw_spin_unlock_bh" },
	{ 0x0f3bbb1f, "mt76_tx" },
	{ 0x0a711811, "__napi_schedule" },
	{ 0x92cef2e6, "mt76_csa_finish" },
	{ 0xd7c4f51b, "mt76_wcid_alloc" },
	{ 0x5a844b26, "__x86_indirect_thunk_rdx" },
	{ 0x67cdd8c3, "mt76_wcid_key_setup" },
	{ 0x7444c00b, "_dev_info" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0x0ba5aa3c, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xb26510be, "mt76_rx" },
	{ 0xeafded1c, "kthread_unpark" },
	{ 0x39b60c63, "mt76_phy_dfs_state" },
	{ 0xdcc00c14, "wiphy_to_ieee80211_hw" },
	{ 0x7410aa48, "mt76_init_queue" },
	{ 0xa0a9b0dc, "debugfs_attr_read" },
	{ 0xb5144dc6, "__mt76_sta_remove" },
	{ 0x84b4f3cf, "mt76_tx_status_skb_done" },
	{ 0xab0e9602, "ieee80211_queue_delayed_work" },
	{ 0x98aacd62, "perf_trace_buf_alloc" },
	{ 0x60f01a84, "perf_trace_run_bpf_submit" },
	{ 0x7444c00b, "_dev_err" },
	{ 0xfa0e48e3, "debugfs_create_bool" },
	{ 0x457edffd, "skb_pull" },
	{ 0x09796bbb, "simple_attr_release" },
	{ 0xd272d446, "__rcu_read_unlock" },
	{ 0x5a844b26, "__x86_indirect_thunk_r14" },
	{ 0xfc5f8088, "__SCK__tp_func_dev_irq" },
	{ 0xf46d5bf3, "mutex_lock" },
	{ 0x457edffd, "skb_push" },
	{ 0x5a844b26, "__x86_indirect_thunk_rbx" },
	{ 0x0a711811, "napi_enable" },
	{ 0x2bf07e13, "seq_putc" },
	{ 0x08aebaba, "trace_event_reg" },
	{ 0xc609ff70, "strncpy" },
	{ 0x183b27e0, "mt76_update_survey" },
	{ 0xe86dc867, "__mt76_poll_msec" },
	{ 0x9c0551c6, "__tasklet_schedule" },
	{ 0x5a844b26, "__x86_indirect_thunk_r13" },
	{ 0x3c1b1a7c, "mt76_ac_to_hwq" },
	{ 0x9934ae99, "ieee80211_wake_queues" },
	{ 0x4da10267, "mt76_mcu_send_and_get_msg" },
	{ 0xb5c51982, "__cpu_online_mask" },
	{ 0xaa365c03, "ieee80211_iter_keys_rcu" },
	{ 0xfcc2e8f3, "__local_bh_enable_ip" },
	{ 0xa24b1056, "_raw_spin_trylock" },
	{ 0x82fd7238, "__ubsan_handle_divrem_overflow" },
	{ 0xe963bd28, "mt76_set_irq_mask" },
	{ 0x49d5b942, "bpf_trace_run1" },
	{ 0x255dfd5a, "idr_destroy" },
	{ 0x801cd323, "ieee80211_calc_tx_airtime" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x574d2dc3, "debugfs_create_u32" },
	{ 0xfc5f8088, "__SCK__tp_func_mac_txdone" },
	{ 0x2ce58a7d, "mt76_seq_puts_array" },
	{ 0x9934ae99, "ieee80211_stop_queues" },
	{ 0x1f006896, "__kfifo_init" },
	{ 0x058c185a, "jiffies" },
	{ 0x9fa91036, "__tracepoint_dev_irq" },
	{ 0xd22cd56f, "seq_read" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xb6a98145, "mt76_mcu_get_response" },
	{ 0xdbb4076b, "__SCT__tp_func_dev_irq" },
	{ 0x351d89ad, "trace_event_buffer_reserve" },
	{ 0x56ba2d9e, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0xf46d5bf3, "mutex_unlock" },
	{ 0x64642167, "mt76_txq_schedule_all" },
	{ 0x02f9bbf0, "init_timer_key" },
	{ 0xcbae5412, "__const_udelay" },
	{ 0x32077f95, "mt76_rx_aggr_start" },
	{ 0x5a844b26, "__x86_indirect_thunk_rcx" },
	{ 0x464d002c, "seq_write" },
	{ 0x12cfb334, "seq_printf" },
	{ 0xc67bb9c7, "ieee80211_beacon_get_tim" },
	{ 0x71798f7e, "delayed_work_timer_fn" },
	{ 0x21f84682, "ieee80211_hdrlen" },
	{ 0xde338d9a, "_raw_spin_lock_bh" },
	{ 0x33a0e06b, "debugfs_create_file_full" },
	{ 0x48320824, "ieee80211_radar_detected" },
	{ 0xae030cd0, "single_release" },
	{ 0x224a53e7, "get_random_bytes" },
	{ 0x40d8875b, "mt76_queues_read" },
	{ 0x031fcfe7, "mt76_register_debugfs_fops" },
	{ 0x5a844b26, "__x86_indirect_thunk_r12" },
	{ 0xdff18c89, "tasklet_setup" },
	{ 0x5adfd8b1, "napi_schedule_prep" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0x0a711811, "napi_disable" },
	{ 0xd0a6e881, "dev_kfree_skb_any_reason" },
	{ 0xe86dc867, "__mt76_poll" },
	{ 0xa8dd822f, "mt76_rx_aggr_stop" },
	{ 0xd272d446, "__SCT__preempt_schedule_notrace" },
	{ 0x62f367ff, "debugfs_create_u8" },
	{ 0x5218fe90, "single_open" },
	{ 0x9c0551c6, "tasklet_unlock_wait" },
	{ 0xde338d9a, "_raw_spin_unlock" },
	{ 0x4c10fec5, "mt76_dma_attach" },
	{ 0x955467e2, "trace_handle_return" },
	{ 0x5a844b26, "__x86_indirect_thunk_r8" },
	{ 0xa9119270, "__SCT__tp_func_mac_txdone" },
	{ 0x12ca6142, "ktime_get_with_offset" },
	{ 0x70eca2ca, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x82fb052a,
	0xf8414c19,
	0x1bb9bfab,
	0xf541d690,
	0x5b12a9a8,
	0xbf9c33b7,
	0xd272d446,
	0x0d8b8609,
	0xa53f4e29,
	0x40a621c5,
	0x18250048,
	0xe24974bd,
	0x7e8b5a27,
	0x1bb9bfab,
	0x7569f618,
	0x4fc539a3,
	0xcd43ac71,
	0xbd03ed67,
	0x92cef2e6,
	0x316f0153,
	0x9fa91036,
	0xc4f23845,
	0x8cf5c30c,
	0x05ebf6f7,
	0x603d30e3,
	0x27f56809,
	0xa53f4e29,
	0x4b4ef2ab,
	0x5d3be6f8,
	0x388dee05,
	0x28a786c6,
	0x0feb1e94,
	0x185931d9,
	0x61196007,
	0x6794f592,
	0xd8248fc3,
	0x00e62fcb,
	0xde338d9a,
	0xd272d446,
	0x353fef8f,
	0xbe0bf0cb,
	0x9f66d3bb,
	0x5f314d15,
	0x5a844b26,
	0x2ff9b4e7,
	0xd7f03428,
	0x363fa8f4,
	0xd272d446,
	0x0f4bde61,
	0xde338d9a,
	0x0f3bbb1f,
	0x0a711811,
	0x92cef2e6,
	0xd7c4f51b,
	0x5a844b26,
	0x67cdd8c3,
	0x7444c00b,
	0x90a48d82,
	0x0ba5aa3c,
	0xb26510be,
	0xeafded1c,
	0x39b60c63,
	0xdcc00c14,
	0x7410aa48,
	0xa0a9b0dc,
	0xb5144dc6,
	0x84b4f3cf,
	0xab0e9602,
	0x98aacd62,
	0x60f01a84,
	0x7444c00b,
	0xfa0e48e3,
	0x457edffd,
	0x09796bbb,
	0xd272d446,
	0x5a844b26,
	0xfc5f8088,
	0xf46d5bf3,
	0x457edffd,
	0x5a844b26,
	0x0a711811,
	0x2bf07e13,
	0x08aebaba,
	0xc609ff70,
	0x183b27e0,
	0xe86dc867,
	0x9c0551c6,
	0x5a844b26,
	0x3c1b1a7c,
	0x9934ae99,
	0x4da10267,
	0xb5c51982,
	0xaa365c03,
	0xfcc2e8f3,
	0xa24b1056,
	0x82fd7238,
	0xe963bd28,
	0x49d5b942,
	0x255dfd5a,
	0x801cd323,
	0xd272d446,
	0x574d2dc3,
	0xfc5f8088,
	0x2ce58a7d,
	0x9934ae99,
	0x1f006896,
	0x058c185a,
	0x9fa91036,
	0xd22cd56f,
	0x82fd7238,
	0xb6a98145,
	0xdbb4076b,
	0x351d89ad,
	0x56ba2d9e,
	0xf46d5bf3,
	0x64642167,
	0x02f9bbf0,
	0xcbae5412,
	0x32077f95,
	0x5a844b26,
	0x464d002c,
	0x12cfb334,
	0xc67bb9c7,
	0x71798f7e,
	0x21f84682,
	0xde338d9a,
	0x33a0e06b,
	0x48320824,
	0xae030cd0,
	0x224a53e7,
	0x40d8875b,
	0x031fcfe7,
	0x5a844b26,
	0xdff18c89,
	0x5adfd8b1,
	0xe4de56b4,
	0x0a711811,
	0xd0a6e881,
	0xe86dc867,
	0xa8dd822f,
	0xd272d446,
	0x62f367ff,
	0x5218fe90,
	0x9c0551c6,
	0xde338d9a,
	0x4c10fec5,
	0x955467e2,
	0x5a844b26,
	0xa9119270,
	0x12ca6142,
	0x70eca2ca,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"ieee80211_sta_register_airtime\0"
	"mt76_dma_rx_poll\0"
	"mt76_tx_status_unlock\0"
	"simple_attr_open\0"
	"debugfs_attr_write\0"
	"devm_kmalloc\0"
	"__rcu_read_lock\0"
	"consume_skb\0"
	"memmove\0"
	"snprintf\0"
	"mt76_tx_status_skb_get\0"
	"trace_raw_output_prep\0"
	"mt76_mcu_msg_alloc\0"
	"mt76_tx_status_lock\0"
	"skb_dequeue\0"
	"__trace_trigger_soft_disabled\0"
	"trace_event_printf\0"
	"this_cpu_off\0"
	"mt76_csa_check\0"
	"mt76_tx_status_skb_add\0"
	"__tracepoint_mac_txdone\0"
	"mt76_tx_check_agg_ssn\0"
	"ieee80211_tx_status_ext\0"
	"mt76_stop_tx_queues\0"
	"___pskb_trim\0"
	"trace_event_raw_init\0"
	"memcpy\0"
	"__mt76_tx_complete_skb\0"
	"pcpu_hot\0"
	"seq_lseek\0"
	"netif_napi_add_weight_locked\0"
	"usleep_range_state\0"
	"ieee80211_restart_hw\0"
	"bpf_trace_run2\0"
	"ieee80211_get_hdrlen_from_skb\0"
	"kthread_park\0"
	"mt76_mcu_rx_event\0"
	"_raw_spin_lock\0"
	"__fentry__\0"
	"mt76_tx_status_check\0"
	"wake_up_process\0"
	"trace_event_buffer_commit\0"
	"ieee80211_get_buffered_bc\0"
	"__x86_indirect_thunk_rax\0"
	"napi_complete_done\0"
	"ieee80211_get_tx_rates\0"
	"ieee80211_send_bar\0"
	"__stack_chk_fail\0"
	"debugfs_create_devm_seqfile\0"
	"_raw_spin_unlock_bh\0"
	"mt76_tx\0"
	"__napi_schedule\0"
	"mt76_csa_finish\0"
	"mt76_wcid_alloc\0"
	"__x86_indirect_thunk_rdx\0"
	"mt76_wcid_key_setup\0"
	"_dev_info\0"
	"__ubsan_handle_out_of_bounds\0"
	"ieee80211_stop_tx_ba_cb_irqsafe\0"
	"mt76_rx\0"
	"kthread_unpark\0"
	"mt76_phy_dfs_state\0"
	"wiphy_to_ieee80211_hw\0"
	"mt76_init_queue\0"
	"debugfs_attr_read\0"
	"__mt76_sta_remove\0"
	"mt76_tx_status_skb_done\0"
	"ieee80211_queue_delayed_work\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"_dev_err\0"
	"debugfs_create_bool\0"
	"skb_pull\0"
	"simple_attr_release\0"
	"__rcu_read_unlock\0"
	"__x86_indirect_thunk_r14\0"
	"__SCK__tp_func_dev_irq\0"
	"mutex_lock\0"
	"skb_push\0"
	"__x86_indirect_thunk_rbx\0"
	"napi_enable\0"
	"seq_putc\0"
	"trace_event_reg\0"
	"strncpy\0"
	"mt76_update_survey\0"
	"__mt76_poll_msec\0"
	"__tasklet_schedule\0"
	"__x86_indirect_thunk_r13\0"
	"mt76_ac_to_hwq\0"
	"ieee80211_wake_queues\0"
	"mt76_mcu_send_and_get_msg\0"
	"__cpu_online_mask\0"
	"ieee80211_iter_keys_rcu\0"
	"__local_bh_enable_ip\0"
	"_raw_spin_trylock\0"
	"__ubsan_handle_divrem_overflow\0"
	"mt76_set_irq_mask\0"
	"bpf_trace_run1\0"
	"idr_destroy\0"
	"ieee80211_calc_tx_airtime\0"
	"__x86_return_thunk\0"
	"debugfs_create_u32\0"
	"__SCK__tp_func_mac_txdone\0"
	"mt76_seq_puts_array\0"
	"ieee80211_stop_queues\0"
	"__kfifo_init\0"
	"jiffies\0"
	"__tracepoint_dev_irq\0"
	"seq_read\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"mt76_mcu_get_response\0"
	"__SCT__tp_func_dev_irq\0"
	"trace_event_buffer_reserve\0"
	"ieee80211_iterate_active_interfaces_atomic\0"
	"mutex_unlock\0"
	"mt76_txq_schedule_all\0"
	"init_timer_key\0"
	"__const_udelay\0"
	"mt76_rx_aggr_start\0"
	"__x86_indirect_thunk_rcx\0"
	"seq_write\0"
	"seq_printf\0"
	"ieee80211_beacon_get_tim\0"
	"delayed_work_timer_fn\0"
	"ieee80211_hdrlen\0"
	"_raw_spin_lock_bh\0"
	"debugfs_create_file_full\0"
	"ieee80211_radar_detected\0"
	"single_release\0"
	"get_random_bytes\0"
	"mt76_queues_read\0"
	"mt76_register_debugfs_fops\0"
	"__x86_indirect_thunk_r12\0"
	"tasklet_setup\0"
	"napi_schedule_prep\0"
	"__ubsan_handle_load_invalid_value\0"
	"napi_disable\0"
	"dev_kfree_skb_any_reason\0"
	"__mt76_poll\0"
	"mt76_rx_aggr_stop\0"
	"__SCT__preempt_schedule_notrace\0"
	"debugfs_create_u8\0"
	"single_open\0"
	"tasklet_unlock_wait\0"
	"_raw_spin_unlock\0"
	"mt76_dma_attach\0"
	"trace_handle_return\0"
	"__x86_indirect_thunk_r8\0"
	"__SCT__tp_func_mac_txdone\0"
	"ktime_get_with_offset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mac80211,mt76,cfg80211");


MODULE_INFO(srcversion, "AFDBCFF4E05F639545CC2CB");
