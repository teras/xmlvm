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
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UITabBarDelegate, 19)

//XMLVM_BEGIN_MEMBERS
#define __ADDITIONAL_INSTANCE_MEMBERS_org_xmlvm_iphone_UITabBarDelegate
//XMLVM_END_MEMBERS

#define __INSTANCE_MEMBERS_org_xmlvm_iphone_UITabBarDelegate \
    __INSTANCE_MEMBERS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_MEMBERS_org_xmlvm_iphone_UITabBarDelegate \
    } org_xmlvm_iphone_UITabBarDelegate

struct org_xmlvm_iphone_UITabBarDelegate {
    __CLASS_DEFINITION_org_xmlvm_iphone_UITabBarDelegate* __class;
    __INSTANCE_MEMBERS_org_xmlvm_iphone_UITabBarDelegate;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UITabBarDelegate
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UITabBarDelegate
typedef struct org_xmlvm_iphone_UITabBarDelegate org_xmlvm_iphone_UITabBarDelegate;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UITabBarDelegate 19
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITabBarDelegate_willBeginCustomizingItems___org_xmlvm_iphone_UITabBar_java_util_ArrayList 14
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITabBarDelegate_didBeginCustomizingItems___org_xmlvm_iphone_UITabBar_java_util_ArrayList 15
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITabBarDelegate_willEndCustomizingItems___org_xmlvm_iphone_UITabBar_java_util_ArrayList_boolean 16
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITabBarDelegate_didEndCustomizingItems___org_xmlvm_iphone_UITabBar_java_util_ArrayList_boolean 17
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITabBarDelegate_didSelectItem___org_xmlvm_iphone_UITabBar_org_xmlvm_iphone_UITabBarItem 18

void __INIT_org_xmlvm_iphone_UITabBarDelegate();
JAVA_OBJECT __NEW_org_xmlvm_iphone_UITabBarDelegate();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UITabBarDelegate();
void org_xmlvm_iphone_UITabBarDelegate___INIT___(JAVA_OBJECT me);
// Vtable index: 14
void org_xmlvm_iphone_UITabBarDelegate_willBeginCustomizingItems___org_xmlvm_iphone_UITabBar_java_util_ArrayList(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
// Vtable index: 15
void org_xmlvm_iphone_UITabBarDelegate_didBeginCustomizingItems___org_xmlvm_iphone_UITabBar_java_util_ArrayList(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
// Vtable index: 16
void org_xmlvm_iphone_UITabBarDelegate_willEndCustomizingItems___org_xmlvm_iphone_UITabBar_java_util_ArrayList_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_BOOLEAN n3);
// Vtable index: 17
void org_xmlvm_iphone_UITabBarDelegate_didEndCustomizingItems___org_xmlvm_iphone_UITabBar_java_util_ArrayList_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_BOOLEAN n3);
// Vtable index: 18
void org_xmlvm_iphone_UITabBarDelegate_didSelectItem___org_xmlvm_iphone_UITabBar_org_xmlvm_iphone_UITabBarItem(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);

#endif
