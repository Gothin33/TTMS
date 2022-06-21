//
// Created by bronya on 22-6-20.
//

#ifndef TTMS_C_LANG__SALESANALYSIS_H
#define TTMS_C_LANG__SALESANALYSIS_H


#include "../Common/common.h"
#include "../Service/Play.h"
#include "../Service/Sale.h"
#include "../Common/List.h"

typedef struct {
    int play_id; 	//??????
    char name[31]; 	//???????
    char area[9]; 	//???????
    int duration; 	//????????¦Ë
    long totaltickets; //????????????
    long sales; 	//??????
    int price; 		//??????
    user_date_t start_date; 	//??????????
    user_date_t end_date; 	//??????????
} salesanalysis_t;


typedef struct salesanalysis_node {
    salesanalysis_t data;
    struct salesanalysis_node *next, *prev;
} salesanalysis_node_t, *salesanalysis_list_t;

int SalesAnalysis_Srv_StaticSale(salesanalysis_list_t list);

int Ticket_Srv_StatRevBySchID(int schedule_id, int *soldCount);

int Sale_Srv_FetchByTicketID(int ticket_id, sale_t *sale);

void SalesAnalysis_Srv_SortBySale(salesanalysis_list_t list);

void SalesAnalysis_Srv_addnode(salesanalysis_list_t list,salesanalysis_node_t *p);

#endif //TTMS_C_LANG__SALESANALYSIS_H
