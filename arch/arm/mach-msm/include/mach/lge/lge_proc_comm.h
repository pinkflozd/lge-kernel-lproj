#ifndef __LGE_PROC_COMM_H__
#define __LGE_PROC_COMM_H__

/* External Functions Prototype */
unsigned lge_get_pif_info(void);
unsigned lge_get_lpm_info(void);
unsigned lge_get_batt_volt(void);
unsigned lge_get_chg_therm(void);
unsigned lge_get_pcb_version(void);
unsigned lge_get_chg_curr_volt(void);
unsigned lge_get_batt_therm(void);
//                                                                                          
unsigned lge_get_batt_therm_8bit_raw(void);
//                                                                                        
unsigned lge_get_batt_volt_raw(void);
unsigned lge_get_chg_stat_reg(void);
unsigned lge_get_chg_en_reg(void);
unsigned lge_set_elt_test(void);
unsigned lge_clear_elt_test(void);
unsigned lge_get_batt_id(void);
unsigned lge_get_cable_info(void);
unsigned lge_get_nv_qem(void);
unsigned lge_get_cable_info(void);
//                                                                                                                             
unsigned lge_get_nv_charging_bypass_boot(void);
//                                                                                                                             
unsigned lge_pm_low_vbatt_notify(void);
/*                                                                           */
/*                                            */ 
//#if defined(CONFIG_MACH_MSM7X27A_U0)
#if defined(CONFIG_MACH_MSM7X27A_U0) || defined(CONFIG_MACH_MSM7X25A_M4)
unsigned lge_get_nv_frststatus(void);
void lge_set_nv_frststatus(unsigned int flag);
#endif
/*                                                                           */
/*                                                       */
void lge_set_nv_send_sync(void);
/*                                                       */
#endif/*                   */
