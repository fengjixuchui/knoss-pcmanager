// Copyright (c) 2010 Kingsoft Corporation. All rights reserved.
// Copyright (c) 2010 The KSafe Authors. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.


#pragma once

//////////////////////////////////////////////////////////////////////////
//all msg
#define MSG_APP_EXAM_SCORE_CHANGE           (WM_APP + 1)
#define MSG_APP_VIRUS_SCAN_FOUND_VIRUS      (WM_APP + 2)
#define MSG_APP_DEFAULT_NAVIGATE            (WM_APP + 3)
#define MSG_APP_VIRUS_SCAN_CLEAN_VIRUS      (WM_APP + 4)
#define MSG_APP_ECHO_FINISH                 (WM_APP + 5)
#define MSG_APP_PROTECTION_SWITCH_CHANGE    (WM_APP + 6)
#define MSG_APP_EXAM_ONLY_ECHO              (WM_APP + 7)
#define MSG_APP_UPDATE_CHECK_FINISH         (WM_APP + 8)
#define MSG_APP_UPDATE_PROGRESS             (WM_APP + 9)
#define MSG_APP_SHOW_MSGBOX					(WM_APP + 10)
#define MSG_APP_EXAM_PROGRESS               (WM_APP + 11)
#define MSG_APP_DELAY_EXAM                  (WM_APP + 12)
#define MSG_APP_DELAY_NAVIGATE_IE           (WM_APP + 13)
#define MSG_APP_IEFIX_FINISHED				(WM_APP + 14)
#define MSG_APP_EXAM_ERROR					(WM_APP + 15)
#define MSG_APP_AV_ENGINE_INSTALL_FINISH    (WM_APP + 16)
#define MSG_APP_GOTO_MAIN_TAB				(WM_APP + 17)

#define MSG_APP_ZHUANSHA_INFO_REFRESH       (WM_APP + 18)
#define MSG_APP_FULL_SCAN_TROJAN			(WM_APP + 19)	
#define MSG_SCAN_END						(WM_APP + 20)

#define	MSG_APP_POWERSWEEP_PROG_STEP		(WM_APP + 21)
#define MSG_APP_SOFTMGR_INIT_DATA_FINISH	(WM_APP + 22)

#define MSG_APP_BWS_USER_DATA_CHANGED	    (WM_APP + 23)
#define MSG_APP_PROTECTION_CTRL_LOAD_FINISH (WM_APP + 24)
#define MSG_APP_PROTECTION_LOG_LOAD_FINISH  (WM_APP + 25)

//plug
#define MSG_PLUG_SCAN_BEGIN				(WM_APP+1000)
#define MSG_PLUG_SCAN_PROGRESS			(MSG_PLUG_SCAN_BEGIN+1)
#define MSG_PLUG_SCAN_FIND				(MSG_PLUG_SCAN_BEGIN+2)
#define MSG_PLUG_SCAN_FINISH			(MSG_PLUG_SCAN_BEGIN+3)
#define MSG_PLUG_REMOVE_ITEM_BEGIN		(MSG_PLUG_SCAN_BEGIN+4)
#define MSG_PLUG_REMOVE_ITEM_END		(MSG_PLUG_SCAN_BEGIN+5)
#define MSG_PLUG_REMOVE_FINISH			(MSG_PLUG_SCAN_BEGIN+6)
#define MSG_PLUG_SCAN_ITEM_CHANGE		(MSG_PLUG_SCAN_BEGIN+7)
#define MSG_PLUG_SCAN_LOAD_LIB_FAIL		(MSG_PLUG_SCAN_BEGIN+8)

#define MSG_PLUG_SCAN_ENG				MSG_PLUG_SCAN_BEGIN+999

//listview
#define MSG_USER_LDLISTVIEWCTRL_BEGIN WM_APP+2000
#define MSG_USER_LDLISTVIEWCTRL_LBP_URL MSG_USER_LDLISTVIEWCTRL_BEGIN+1//如果用户点击了URL，就会像用户发送这个消息，WPARAM 行号，LPARAM URL的索引
#define MSG_USER_LDLISTVIEWCTRL_LBP_EXTXT MSG_USER_LDLISTVIEWCTRL_BEGIN+2//如果用户点击了EXTXT, 就会像用户发送这个消息，WPARAM 行号，LPARAM EXTXT的索引
#define MSG_USER_LDLISTVIEWCTRL_LBP_BTN   MSG_USER_LDLISTVIEWCTRL_BEGIN+3
#define MSG_USER_LDLISTVIEWCTRL_EXPAND	  MSG_USER_LDLISTVIEWCTRL_BEGIN+4//展开操作
#define MSG_USER_LDLISTVIEWCTRL_NOTIFY	  MSG_USER_LDLISTVIEWCTRL_BEGIN+5//
#define MSG_USER_LDLISTVIEWCTRL_CHECKBOX	  MSG_USER_LDLISTVIEWCTRL_BEGIN+6//

#define MSG_USER_LDLISTVIEWCTRL_END MSG_USER_LDLISTVIEWCTRL_BEGIN+999

//////////////////////////////////////////////////////////////////////////
// system optimizie

#define MSG_SYSOPT_BEGIN			(WM_APP+3000)

#define MSG_SYSOPT_RUN_SCAN_FIND	(MSG_SYSOPT_BEGIN+1)
#define MSG_SYSOPT_RUN_SCAN_END		(MSG_SYSOPT_BEGIN+2)
#define MSG_SYSOPT_RUN_RESTORE_END	(MSG_SYSOPT_BEGIN+3)	
#define MSG_SYSOPT_RUN_FIRST_IN		(MSG_SYSOPT_BEGIN+4)

#define MSG_CLR_BEGIN				(WM_APP+3100)
#define MSG_CLR_TREETOP				(MSG_CLR_BEGIN+1)
#define MSG_CLR_LAJI_TREETOP		(MSG_CLR_BEGIN+2)
#define MSG_CLR_REG_TREETOP			(MSG_CLR_BEGIN+3)
#define MSG_CLR_REG_TREELUP			(MSG_CLR_BEGIN+4)
#define MSG_CLR_LAJI_TREELUP		(MSG_CLR_BEGIN+5)
#define MSG_CLR_REG_SCAN_FINISH		(MSG_CLR_BEGIN+6)
#define MSG_CLR_LAJI_SCAN_FINISH	(MSG_CLR_BEGIN+7)
#define MSG_CLR_ONE_SCAN_TXT		(MSG_CLR_BEGIN+8)
#define MSG_CLR_ONE_SCAN_PRG		(MSG_CLR_BEGIN+9)
#define MSG_CLR_ONE_SCAN_VALUE		(MSG_CLR_BEGIN+10)
#define MSG_CLR_HENJI_SCAN_FINISH	(MSG_CLR_BEGIN+11)
#define MSG_CLR_HENJI_TREELUP		(MSG_CLR_BEGIN+12)
#define XX_TIME_ID					(MSG_CLR_BEGIN+13)
#define MSG_CLR_REG_CLEAR_fINISH	(MSG_CLR_BEGIN+14)
#define MSG_CLR_HENJI_CLEAR_fINISH	(MSG_CLR_BEGIN+15)
#define	MSG_CLR_LAJI_CLEAR_fINISH	(MSG_CLR_BEGIN+16)
#define MSG_CLR_TREE_SCANING		(MSG_CLR_BEGIN+17)
#define MSG_CLR_LAJI_TREE_SHOW_HONG	(MSG_CLR_BEGIN+18)
#define MSG_CLR_LAJI_TREE_SHOW_HEI	(MSG_CLR_BEGIN+19)

#define MSG_CLR_REG_TREE_SHOW_HONG  (MSG_CLR_BEGIN+20)
#define MSG_CLR_REG_TREE_SHOW_HEI  (MSG_CLR_BEGIN+21)
#define MSG_CLR_HENJI_TREE_SHOW_HONG  (MSG_CLR_BEGIN+22)
#define MSG_CLR_HENJI_TREE_SHOW_HEI  (MSG_CLR_BEGIN+23)
#define MSG_CLR_TREETOP2             (MSG_CLR_BEGIN+24)
#define MSG_CLR_TREETOP_EX1           (MSG_CLR_BEGIN+25)
#define MSG_CLR_TREETOP_EX2           (MSG_CLR_BEGIN+26)
#define MSG_CLR_TREETOP_EX3           (MSG_CLR_BEGIN+27)
#define MSG_CLR_TREETOP3             (MSG_CLR_BEGIN+28)
#define MSG_CLR_CONFIG_TREELUP       (MSG_CLR_BEGIN+29)
#define MSG_CLR_COLUNM_CLICK         (MSG_CLR_BEGIN+30)

//////////////////////////////////////////////////////////////////////////
//all timer id
#define XX_PLUG_PROGRESS_SCAN_TIMER_ID		1001
#define XX_PLUG_PROGRESS_REMOVE_TIMER_ID	1002
#define EXAM_TIMER_SHOWLISTVIEW				1003
#define EXAM_TIMER_PROGRESS					1004
#define IEFIX_SCAN_TIMER_PROGRESS_ID        1005
#define IEFIX_SCAN_TIMER_ANTI_ID			1006
#define IEFIX_UPDATE_PROGRESS_TEXT			1007
#define TIMER_ID_PROC						1008

#define IDC_EXAM_DLG_CTRL_ID_BEGIN				800
#define IDC_EXAM_LNK_HOSTS_CHECKALL_ID			IDC_EXAM_DLG_CTRL_ID_BEGIN+10//全选
#define IDC_EXAM_LNK_HOSTS_UNCHECKALL_ID		IDC_EXAM_DLG_CTRL_ID_BEGIN+11//全不选
#define IDC_EXAM_BTN_HOSTS_BELIEVE_ID			IDC_EXAM_DLG_CTRL_ID_BEGIN+12//信任
#define IDC_EXAM_BTN_HOSTS_UNBELIEVE_ID			IDC_EXAM_DLG_CTRL_ID_BEGIN+13//屏蔽
#define IDC_EXAM_BTN_HOSTS_CLOSE_ID				IDC_EXAM_DLG_CTRL_ID_BEGIN+14//关闭
#define IDC_EXAM_BTN_HOSTS_RCLOSE_ID			IDC_EXAM_DLG_CTRL_ID_BEGIN+15
#define IDC_EXAM_LIST_HOSTS_ID					IDC_EXAM_DLG_CTRL_ID_BEGIN+16

#define IDC_EXAM_RADIO_FIX						IDC_EXAM_DLG_CTRL_ID_BEGIN+33//修复
#define IDC_EXAM_RADIO_IGNORE					IDC_EXAM_DLG_CTRL_ID_BEGIN+34//忽略
#define IDC_EXAM_RADIO_CURSET				    IDC_EXAM_DLG_CTRL_ID_BEGIN+35//保留
#define IDC_EXAM_LIST_SR_ID						IDC_EXAM_DLG_CTRL_ID_BEGIN+36//共享资源
#define IDC_EXAM_DLG_TAB						IDC_EXAM_DLG_CTRL_ID_BEGIN+37//TAB
#define IDC_EXAM_CTRL_TMP_ID					IDC_EXAM_DLG_CTRL_ID_BEGIN+38 
#define IDC_EXAM_TXT_TITLE						IDC_EXAM_DLG_CTRL_ID_BEGIN+39//体检弹出窗口的标题
#define IDC_EXAM_CTRL_TMP2_ID					IDC_EXAM_DLG_CTRL_ID_BEGIN+40
#define IDC_EXAM_DLG_CTRL_ID_END				IDC_EXAM_CTRL_ID_BEGIN+199

//
#define MSG_USER_DIRLIST_ADD	  4000
#define MSG_USER_DIRLIST_CHANGE	  4001
#define MSG_USER_DIRLIST_SCANING  4002
#define MSG_USER_DIRLIST_SCANEND  4003
#define MSG_USER_SPECLIST_SCANEND  4004