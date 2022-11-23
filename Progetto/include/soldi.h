/*****************************************************************************
*
*    @file	soldi.h
*    @date	xx.xx.xxxx
*    @version	xx.xx
*    @author	XXXX YYYY
*
******************************************************************************
*
*    @brief 	Definisce la parte pubblica del file soldi.c
*
******************************************************************************/

#ifndef SOLDI_H
#define SOLDI_H

/**********************************************************
* COSTANTI PUBBLICHE
**********************************************************/


/**********************************************************
* TIPI DI DATO PUBBLICI
**********************************************************/


/**********************************************************
* VARIABILI ESPORTATE
**********************************************************/


/**********************************************************
* PROTOTIPI DELLE FUNZIONI ESPORTATE
**********************************************************/
int soldiGetNCassetti (void);
int soldiGetValore (int cassetto, int* valore);
int soldiGetDisponibili (int cassetto, int* q);
void soldiCarica (int q);
int soldiAggiungi (int valore);
int soldiDispensaResto (int resto);
int soldiGetDispensato (int cassetto, int* q);


#endif //SOLDI_H
