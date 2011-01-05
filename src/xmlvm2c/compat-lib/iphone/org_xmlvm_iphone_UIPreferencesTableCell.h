#ifndef __ORG_XMLVM_IPHONE_UIPREFERENCESTABLECELL__
#define __ORG_XMLVM_IPHONE_UIPREFERENCESTABLECELL__

#include "xmlvm.h"
#include "org_xmlvm_iphone_UIView.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_java_lang_String
#define XMLVM_FORWARD_DECL_java_lang_String
XMLVM_FORWARD_DECL(java_lang_String)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIView
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIView
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIView)
#endif
// Class declarations for org.xmlvm.iphone.UIPreferencesTableCell
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UIPreferencesTableCell, 75)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIPreferencesTableCell;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIPreferencesTableCell_ARRAYTYPE;

//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UIPreferencesTableCell
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_UIPreferencesTableCell \
    __INSTANCE_FIELDS_org_xmlvm_iphone_UIView; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UIPreferencesTableCell \
    } org_xmlvm_iphone_UIPreferencesTableCell

struct org_xmlvm_iphone_UIPreferencesTableCell {
    __TIB_DEFINITION_org_xmlvm_iphone_UIPreferencesTableCell* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_UIPreferencesTableCell;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIPreferencesTableCell
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIPreferencesTableCell
typedef struct org_xmlvm_iphone_UIPreferencesTableCell org_xmlvm_iphone_UIPreferencesTableCell;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UIPreferencesTableCell 75
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UIPreferencesTableCell_setTitle___java_lang_String 70
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UIPreferencesTableCell_getTitle__ 71
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UIPreferencesTableCell_setEnabled___boolean 72
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UIPreferencesTableCell_setGroupCell___boolean 73
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UIPreferencesTableCell_isGroupCell__ 74

void __INIT_org_xmlvm_iphone_UIPreferencesTableCell();
JAVA_OBJECT __NEW_org_xmlvm_iphone_UIPreferencesTableCell();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UIPreferencesTableCell();
void org_xmlvm_iphone_UIPreferencesTableCell___INIT___(JAVA_OBJECT me);
// Vtable index: 70
void org_xmlvm_iphone_UIPreferencesTableCell_setTitle___java_lang_String(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 71
JAVA_OBJECT org_xmlvm_iphone_UIPreferencesTableCell_getTitle__(JAVA_OBJECT me);
// Vtable index: 72
void org_xmlvm_iphone_UIPreferencesTableCell_setEnabled___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1);
// Vtable index: 73
void org_xmlvm_iphone_UIPreferencesTableCell_setGroupCell___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1);
// Vtable index: 74
JAVA_BOOLEAN org_xmlvm_iphone_UIPreferencesTableCell_isGroupCell__(JAVA_OBJECT me);

#endif
