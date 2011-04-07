#ifndef __ORG_XMLVM_IPHONE_UITABBARDELEGATE__
#define __ORG_XMLVM_IPHONE_UITABBARDELEGATE__

#include "xmlvm.h"
#include "org_xmlvm_iphone_NSObject.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSObject)
#endif
#ifndef XMLVM_FORWARD_DECL_java_util_ArrayList
#define XMLVM_FORWARD_DECL_java_util_ArrayList
XMLVM_FORWARD_DECL(java_util_ArrayList)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UITabBar
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UITabBar
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UITabBar)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UITabBarItem
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UITabBarItem
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UITabBarItem)
#endif
// Class declarations for org.xmlvm.iphone.UITabBarDelegate
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UITabBarDelegate, 14, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_UITabBarDelegate)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITabBarDelegate;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITabBarDelegate_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITabBarDelegate_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITabBarDelegate_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UITabBarDelegate
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_UITabBarDelegate \
    __INSTANCE_FIELDS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UITabBarDelegate \
    } org_xmlvm_iphone_UITabBarDelegate

struct org_xmlvm_iphone_UITabBarDelegate {
    __TIB_DEFINITION_org_xmlvm_iphone_UITabBarDelegate* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_UITabBarDelegate;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UITabBarDelegate
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UITabBarDelegate
typedef struct org_xmlvm_iphone_UITabBarDelegate org_xmlvm_iphone_UITabBarDelegate;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UITabBarDelegate 14
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITabBarDelegate_willBeginCustomizingItems___org_xmlvm_iphone_UITabBar_java_util_ArrayList 9
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITabBarDelegate_didBeginCustomizingItems___org_xmlvm_iphone_UITabBar_java_util_ArrayList 10
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITabBarDelegate_willEndCustomizingItems___org_xmlvm_iphone_UITabBar_java_util_ArrayList_boolean 11
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITabBarDelegate_didEndCustomizingItems___org_xmlvm_iphone_UITabBar_java_util_ArrayList_boolean 12
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITabBarDelegate_didSelectItem___org_xmlvm_iphone_UITabBar_org_xmlvm_iphone_UITabBarItem 13

void __INIT_org_xmlvm_iphone_UITabBarDelegate();
void __INIT_IMPL_org_xmlvm_iphone_UITabBarDelegate();
void __DELETE_org_xmlvm_iphone_UITabBarDelegate(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_UITabBarDelegate(JAVA_OBJECT me);
JAVA_OBJECT __NEW_org_xmlvm_iphone_UITabBarDelegate();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UITabBarDelegate();
void org_xmlvm_iphone_UITabBarDelegate___INIT___(JAVA_OBJECT me);
// Vtable index: 9
void org_xmlvm_iphone_UITabBarDelegate_willBeginCustomizingItems___org_xmlvm_iphone_UITabBar_java_util_ArrayList(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
// Vtable index: 10
void org_xmlvm_iphone_UITabBarDelegate_didBeginCustomizingItems___org_xmlvm_iphone_UITabBar_java_util_ArrayList(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
// Vtable index: 11
void org_xmlvm_iphone_UITabBarDelegate_willEndCustomizingItems___org_xmlvm_iphone_UITabBar_java_util_ArrayList_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_BOOLEAN n3);
// Vtable index: 12
void org_xmlvm_iphone_UITabBarDelegate_didEndCustomizingItems___org_xmlvm_iphone_UITabBar_java_util_ArrayList_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_BOOLEAN n3);
// Vtable index: 13
void org_xmlvm_iphone_UITabBarDelegate_didSelectItem___org_xmlvm_iphone_UITabBar_org_xmlvm_iphone_UITabBarItem(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);

#endif
