#include "ArmorMaterialVanityItem.h"

class UObject;
class UArmorMaterialVanityItem;
class UMaterialInstance;
class UMaterialInstanceConstant;
class UMaterialInstanceDynamic;

UMaterialInstanceConstant* UArmorMaterialVanityItem::SetArmorMaterialToTwoSided(UMaterialInstance* Parent) {
    return NULL;
}

UMaterialInstanceDynamic* UArmorMaterialVanityItem::CreateIcon(UObject* Owner) const {
    return NULL;
}

void UArmorMaterialVanityItem::CreateClothMaterialForAmorVanity(UArmorMaterialVanityItem* armorVanity) {
}

UArmorMaterialVanityItem::UArmorMaterialVanityItem() {
    this->DynamicIcon = NULL;
    this->LockedToArmor = NULL;
}

