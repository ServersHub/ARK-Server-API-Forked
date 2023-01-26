#pragma once
#include "API\UE\UE.h"

__declspec(dllexport) UProperty* UObject::FindProperty(FName name)
{
    for (UProperty* Property = ClassField()->PropertyLinkField(); Property != nullptr; Property = Property->PropertyLinkNextField())
        if (Property->NameField().Compare(&name) == 0)
            return Property;
    return nullptr;
}
