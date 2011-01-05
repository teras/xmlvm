#ifndef __ORG_XMLVM_IPHONE_UIVIEWGL__
#define __ORG_XMLVM_IPHONE_UIVIEWGL__

#include "xmlvm.h"
#include "org_xmlvm_iphone_UIView.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIView
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIView
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIView)
#endif
// Class declarations for org.xmlvm.iphone.UIViewGL
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UIViewGL, 70)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIViewGL;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIViewGL_ARRAYTYPE;

//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UIViewGL
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_UIViewGL \
    __INSTANCE_FIELDS_org_xmlvm_iphone_UIView; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UIViewGL \
    } org_xmlvm_iphone_UIViewGL

struct org_xmlvm_iphone_UIViewGL {
    __TIB_DEFINITION_org_xmlvm_iphone_UIViewGL* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_UIViewGL;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIViewGL
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIViewGL
typedef struct org_xmlvm_iphone_UIViewGL org_xmlvm_iphone_UIViewGL;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UIViewGL 70

void __INIT_org_xmlvm_iphone_UIViewGL();
JAVA_OBJECT __NEW_org_xmlvm_iphone_UIViewGL();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UIViewGL();
void org_xmlvm_iphone_UIViewGL___INIT___(JAVA_OBJECT me);
void org_xmlvm_iphone_UIViewGL___INIT____org_xmlvm_iphone_CGRect(JAVA_OBJECT me, JAVA_OBJECT n1);

#endif
