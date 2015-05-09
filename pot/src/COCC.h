#ifndef pOt_COCC__INC
#define pOt_COCC__INC
/* This code is generated by pOt. */

#include "COCT.h"



extern pOt_BOOLEAN pOt_tempsafe_COCC;

extern void pOt_TermStmt_COCC pOt__ARGS((void));
extern void pOt_OpenScope_COCC pOt__ARGS((void));
extern void pOt_CloseScope_COCC pOt__ARGS((void));
extern void pOt_OuterPrologue_COCC pOt__ARGS((pOt_Object_COCT , pOt_BOOLEAN ));
extern void pOt_ForwardDeclaration_COCC pOt__ARGS((pOt_Object_COCT ));
extern void pOt_InnerPrologue_COCC pOt__ARGS((pOt_Object_COCT , pOt_BOOLEAN ));
extern void pOt_Epilogue_COCC pOt__ARGS((pOt_Object_COCT , pOt_BOOLEAN ));
extern void pOt_ModulePrologue_COCC pOt__ARGS((void));
extern void pOt_BodyPrologue_COCC pOt__ARGS((void));
extern void pOt_BodyEpilogue_COCC pOt__ARGS((void));
extern void pOt_Result_COCC pOt__ARGS((struct pOt__tag_3_COCT *));
extern void pOt_Return_COCC pOt__ARGS((void));
extern void pOt_Loop_COCC pOt__ARGS((void));
extern void pOt_LoopCondPfx_COCC pOt__ARGS((void));
extern void pOt_LoopCondSfx_COCC pOt__ARGS((pOt_BOOLEAN ));
extern void pOt_LoopLabel_COCC pOt__ARGS((pOt_INTEGER ));
extern void pOt_With_COCC pOt__ARGS((struct pOt__tag_3_COCT *, pOt_Object_COCT ));
extern void pOt_Exit_COCC pOt__ARGS((pOt_INTEGER ));
extern void pOt_CasePfx_COCC pOt__ARGS((void));
extern void pOt_CaseSfx_COCC pOt__ARGS((void));
extern void pOt_CaseLabelList_COCC pOt__ARGS((struct pOt__tag_3_COCT *, struct pOt__tag_3_COCT *));
extern void pOt_CaseBar_COCC pOt__ARGS((void));
extern void pOt_CaseElse_COCC pOt__ARGS((void));
extern void pOt_IfPfx_COCC pOt__ARGS((void));
extern void pOt_IfSfx_COCC pOt__ARGS((void));
extern void pOt_Else_COCC pOt__ARGS((void));
extern void pOt_CExport_COCC pOt__ARGS((void));
extern void pOt_CommitCExport_COCC pOt__ARGS((pOt__DynArr *, pOt__DynArr *, pOt_BOOLEAN *));
extern void pOt_InitData_COCC pOt__ARGS((void));
extern void pOt_COCC__body pOt__ARGS((void));

#endif