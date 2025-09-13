#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mt76_connac_mcu_start_firmware, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_patch_sem_ctrl, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_start_patch, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_init_download, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_channel_domain, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_mac_enable, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_vif_ps, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_rts_thresh, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_beacon_loss_iter, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_add_nested_tlv, "_gpl", "");
KSYMTAB_FUNC(__mt76_connac_mcu_alloc_sta_req, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_alloc_wtbl_req, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_bss_omac_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_basic_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_uapsd, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_wtbl_hdr_trans_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_update_hdr_trans, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_wtbl_update_hdr_trans, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_wtbl_generic_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_get_phy_mode_v2, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_wtbl_smps_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_wtbl_ht_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_cmd, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_wtbl_ba_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_uni_add_dev, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_ba_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_ba, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_get_phy_mode, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_get_he_phy_cap, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_uni_add_bss, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_hw_scan, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_cancel_hw_scan, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sched_scan_req, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sched_scan_enable, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_chip_config, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_deep_sleep, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_sta_state_dp, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_coredump_event, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_get_nic_capability, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_rate_txpower, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_update_arp_filter, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_p2p_oppps, "_gpl", "");
KSYMTAB_DATA(mt76_connac_wowlan_support, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_update_gtk_rekey, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_hif_suspend, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_suspend_iter, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_reg_rr, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_reg_wr, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_add_key, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_bss_ext_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_bss_basic_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_pm, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_restart, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_rdd_cmd, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_pm_wake, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_power_save_sched, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_free_pending_tx_skbs, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_pm_queue_skb, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_pm_dequeue_skbs, "_gpl", "");

SYMBOL_CRC(mt76_connac_mcu_start_firmware, 0xcb1b824b, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_patch_sem_ctrl, 0x66692013, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_start_patch, 0x52c33ad1, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_init_download, 0x3a89cea9, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_channel_domain, 0x52e0701f, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_mac_enable, 0x53a05d3c, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_vif_ps, 0xfeeef1ab, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_rts_thresh, 0x07290894, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_beacon_loss_iter, 0x82057247, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_add_nested_tlv, 0x012db9e7, "_gpl");
SYMBOL_CRC(__mt76_connac_mcu_alloc_sta_req, 0x3bb85c8b, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_alloc_wtbl_req, 0x5b178a96, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_bss_omac_tlv, 0x094f5188, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_basic_tlv, 0xea8c4c26, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_uapsd, 0x22b15f7e, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_wtbl_hdr_trans_tlv, 0xdeaec0aa, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_update_hdr_trans, 0xfc2dc54f, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_wtbl_update_hdr_trans, 0x19262a7b, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_wtbl_generic_tlv, 0x000af55c, "_gpl");
SYMBOL_CRC(mt76_connac_get_phy_mode_v2, 0xd9ff10d6, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_tlv, 0x15981d36, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_wtbl_smps_tlv, 0xa2b96dff, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_wtbl_ht_tlv, 0x2687107d, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_cmd, 0xa9345205, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_wtbl_ba_tlv, 0x9c0a201f, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_uni_add_dev, 0x716b8678, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_ba_tlv, 0xd02d2f88, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_ba, 0x0076afc7, "_gpl");
SYMBOL_CRC(mt76_connac_get_phy_mode, 0x0b3f8793, "_gpl");
SYMBOL_CRC(mt76_connac_get_he_phy_cap, 0xbf9859a5, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_uni_add_bss, 0x716b8678, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_hw_scan, 0xf0429846, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_cancel_hw_scan, 0x26345e4e, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sched_scan_req, 0x46ee7310, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sched_scan_enable, 0x9fa4336a, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_chip_config, 0x52c33ad1, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_deep_sleep, 0x44fc413e, "_gpl");
SYMBOL_CRC(mt76_connac_sta_state_dp, 0xcca0da9f, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_coredump_event, 0xe21e1d4e, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_get_nic_capability, 0x52e0701f, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_rate_txpower, 0x52e0701f, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_update_arp_filter, 0xb1a672b7, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_p2p_oppps, 0x63e83916, "_gpl");
SYMBOL_CRC(mt76_connac_wowlan_support, 0x613fefc9, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_update_gtk_rekey, 0x80d9fdc5, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_hif_suspend, 0x1bc38d85, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_suspend_iter, 0x82057247, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_reg_rr, 0xc3d47d86, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_reg_wr, 0x10d7b67e, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_add_key, 0xd01469f0, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_bss_ext_tlv, 0xbb8aedbe, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_bss_basic_tlv, 0xada17403, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_pm, 0xf7dec824, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_restart, 0x52c33ad1, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_rdd_cmd, 0x2a8d0ea6, "_gpl");
SYMBOL_CRC(mt76_connac_pm_wake, 0xa9db3c01, "_gpl");
SYMBOL_CRC(mt76_connac_power_save_sched, 0x219c1149, "_gpl");
SYMBOL_CRC(mt76_connac_free_pending_tx_skbs, 0xe2e4fdf2, "_gpl");
SYMBOL_CRC(mt76_connac_pm_queue_skb, 0x380f47b8, "_gpl");
SYMBOL_CRC(mt76_connac_pm_dequeue_skbs, 0x219c1149, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x457edffd, "skb_put" },
	{ 0xd272d446, "__rcu_read_lock" },
	{ 0x0d8b8609, "consume_skb" },
	{ 0x40a621c5, "snprintf" },
	{ 0x49733ad6, "queue_work_on" },
	{ 0x7e8b5a27, "mt76_mcu_msg_alloc" },
	{ 0xc87f4bab, "finish_wait" },
	{ 0xc36345fa, "__sw_hweight32" },
	{ 0xa53f4e29, "memcpy" },
	{ 0x0a839bd3, "ieee80211_beacon_loss" },
	{ 0x0db8d68d, "prepare_to_wait_event" },
	{ 0xd272d446, "__fentry__" },
	{ 0xbe0bf0cb, "wake_up_process" },
	{ 0x467ed8e0, "ieee80211_find_sta" },
	{ 0x6ac784f4, "schedule_timeout" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x8ce83585, "queue_delayed_work_on" },
	{ 0xde338d9a, "_raw_spin_unlock_bh" },
	{ 0x0f3bbb1f, "mt76_tx" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0x7a5ffe84, "init_wait_entry" },
	{ 0x457edffd, "skb_pull" },
	{ 0xb193f6e8, "mt76_mcu_skb_send_and_get_msg" },
	{ 0xd272d446, "__rcu_read_unlock" },
	{ 0x9934ae99, "ieee80211_wake_queues" },
	{ 0x4da10267, "mt76_mcu_send_and_get_msg" },
	{ 0xaa365c03, "ieee80211_iter_keys_rcu" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0x85acaba2, "cancel_delayed_work" },
	{ 0x7295b8c3, "ieee80211_freq_khz_to_channel" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x9934ae99, "ieee80211_stop_queues" },
	{ 0x058c185a, "jiffies" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc6a6c2b3, "mt76_get_rate_power_limits" },
	{ 0x229a1164, "ieee80211_scan_completed" },
	{ 0x85acaba2, "cancel_delayed_work_sync" },
	{ 0x75738bed, "__warn_printk" },
	{ 0x389781be, "mt76_get_sar_power" },
	{ 0xde338d9a, "_raw_spin_lock_bh" },
	{ 0x224a53e7, "get_random_bytes" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0x70eca2ca, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x457edffd,
	0xd272d446,
	0x0d8b8609,
	0x40a621c5,
	0x49733ad6,
	0x7e8b5a27,
	0xc87f4bab,
	0xc36345fa,
	0xa53f4e29,
	0x0a839bd3,
	0x0db8d68d,
	0xd272d446,
	0xbe0bf0cb,
	0x467ed8e0,
	0x6ac784f4,
	0xd272d446,
	0x8ce83585,
	0xde338d9a,
	0x0f3bbb1f,
	0x90a48d82,
	0x7a5ffe84,
	0x457edffd,
	0xb193f6e8,
	0xd272d446,
	0x9934ae99,
	0x4da10267,
	0xaa365c03,
	0xe54e0a6b,
	0x85acaba2,
	0x7295b8c3,
	0xd272d446,
	0x9934ae99,
	0x058c185a,
	0x82fd7238,
	0xc6a6c2b3,
	0x229a1164,
	0x85acaba2,
	0x75738bed,
	0x389781be,
	0xde338d9a,
	0x224a53e7,
	0xe4de56b4,
	0x7851be11,
	0x70eca2ca,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"skb_put\0"
	"__rcu_read_lock\0"
	"consume_skb\0"
	"snprintf\0"
	"queue_work_on\0"
	"mt76_mcu_msg_alloc\0"
	"finish_wait\0"
	"__sw_hweight32\0"
	"memcpy\0"
	"ieee80211_beacon_loss\0"
	"prepare_to_wait_event\0"
	"__fentry__\0"
	"wake_up_process\0"
	"ieee80211_find_sta\0"
	"schedule_timeout\0"
	"__stack_chk_fail\0"
	"queue_delayed_work_on\0"
	"_raw_spin_unlock_bh\0"
	"mt76_tx\0"
	"__ubsan_handle_out_of_bounds\0"
	"init_wait_entry\0"
	"skb_pull\0"
	"mt76_mcu_skb_send_and_get_msg\0"
	"__rcu_read_unlock\0"
	"ieee80211_wake_queues\0"
	"mt76_mcu_send_and_get_msg\0"
	"ieee80211_iter_keys_rcu\0"
	"__fortify_panic\0"
	"cancel_delayed_work\0"
	"ieee80211_freq_khz_to_channel\0"
	"__x86_return_thunk\0"
	"ieee80211_stop_queues\0"
	"jiffies\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"mt76_get_rate_power_limits\0"
	"ieee80211_scan_completed\0"
	"cancel_delayed_work_sync\0"
	"__warn_printk\0"
	"mt76_get_sar_power\0"
	"_raw_spin_lock_bh\0"
	"get_random_bytes\0"
	"__ubsan_handle_load_invalid_value\0"
	"__SCT__might_resched\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mt76,mac80211,cfg80211");


MODULE_INFO(srcversion, "9C275C199C2969B0DD0A593");
