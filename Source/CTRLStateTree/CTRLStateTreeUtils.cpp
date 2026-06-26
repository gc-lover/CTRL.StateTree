#include "CTRLStateTreeUtils.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(CTRLStateTreeUtils)

FPropertyBindingPath UCTRLStateTreeUtils::GetStructPropertyPath(FGuid const& ID, FName const A, FName const B)
{
	return FPropertyBindingPath(ID, FName(*FString::Printf(TEXT("%s.%s"), *A.ToString(), *B.ToString())));
}
