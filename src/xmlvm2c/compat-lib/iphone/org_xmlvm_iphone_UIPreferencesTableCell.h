#ifndef __ORG_XMLVM_IPHONE_UIPREFERENCESTABLECELL__
#define __ORG_XMLVM_IPHONE_UIPREFERENCESTABLECELL__

#include "xmlvm.h"

// Preprocessor constants for interfaces:
// Implemented interfaces:
// Super Class:
#include "org_xmlvm_iphone_UIView.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_java_lang_String
#define XMLVM_FORWARD_DECL_java_lang_String
XMLVM_FORWARD_DECL(java_lang_String)
#endif
// Class declarations for org.xmlvm.iphone.UIPreferencesTableCell
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UIPreferencesTableCell, 15, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_UIPreferencesTableCell)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIPreferencesTableCell;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIPreferencesTableCell_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIPreferencesTableCell_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIPreferencesTableCell_3ARRAY;
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

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UIPreferencesTableCell 15

void __INIT_org_xmlvm_iphone_UIPreferencesTableCell();
void __INIT_IMPL_org_xmlvm_iphone_UIPreferencesTableCell();
void __DELETE_org_xmlvm_iphone_UIPreferencesTableCell(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_UIPreferencesTableCell(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer);
JAVA_OBJECT __NEW_org_xmlvm_iphone_UIPreferencesTableCell();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UIPreferencesTableCell();
void org_xmlvm_iphone_UIPreferencesTableCell___INIT___(JAVA_OBJECT me);
void org_xmlvm_iphone_UIPreferencesTableCell_setTitle___java_lang_String(JAVA_OBJECT me, JAVA_OBJECT n1);
JAVA_OBJECT org_xmlvm_iphone_UIPreferencesTableCell_getTitle__(JAVA_OBJECT me);
void org_xmlvm_iphone_UIPreferencesTableCell_setEnabled___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1);
void org_xmlvm_iphone_UIPreferencesTableCell_setGroupCell___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1);
JAVA_BOOLEAN org_xmlvm_iphone_UIPreferencesTableCell_isGroupCell__(JAVA_OBJECT me);

// Define a Macro for the method declarations of the Obj-C wrapper class so that subclass wrappers may easily include these too
#define XMLVM_OBJC_OVERRIDE_CLASS_DECLARATIONS_org_xmlvm_iphone_UIPreferencesTableCell \
XMLVM_OBJC_OVERRIDE_CLASS_DECLARATIONS_org_xmlvm_iphone_UIView \

// Define a Macro for the entire contents of the Obj-C wrapper class
#define XMLVM_OBJC_OVERRIDE_CLASS_DEFINITIONS_org_xmlvm_iphone_UIPreferencesTableCell \
XMLVM_OBJC_OVERRIDE_CLASS_DEFINITIONS_org_xmlvm_iphone_UIView \


#endif
