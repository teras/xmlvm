#ifndef __ORG_XMLVM_IPHONE_SKPRODUCTSREQUEST__
#define __ORG_XMLVM_IPHONE_SKPRODUCTSREQUEST__

#include "xmlvm.h"
#include "org_xmlvm_iphone_SKRequest.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_SKProductsRequestDelegate
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_SKProductsRequestDelegate
XMLVM_FORWARD_DECL(org_xmlvm_iphone_SKProductsRequestDelegate)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_SKRequest
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_SKRequest
XMLVM_FORWARD_DECL(org_xmlvm_iphone_SKRequest)
#endif
#ifndef XMLVM_FORWARD_DECL_java_util_Set
#define XMLVM_FORWARD_DECL_java_util_Set
XMLVM_FORWARD_DECL(java_util_Set)
#endif
// Class declarations for org.xmlvm.iphone.SKProductsRequest
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_SKProductsRequest, 20)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_SKProductsRequest;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_SKProductsRequest_ARRAYTYPE;

//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_SKProductsRequest
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_SKProductsRequest \
    __INSTANCE_FIELDS_org_xmlvm_iphone_SKRequest; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_SKProductsRequest \
    } org_xmlvm_iphone_SKProductsRequest

struct org_xmlvm_iphone_SKProductsRequest {
    __TIB_DEFINITION_org_xmlvm_iphone_SKProductsRequest* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_SKProductsRequest;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_SKProductsRequest
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_SKProductsRequest
typedef struct org_xmlvm_iphone_SKProductsRequest org_xmlvm_iphone_SKProductsRequest;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_SKProductsRequest 20
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_SKProductsRequest_getProductsDelegate__ 18
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_SKProductsRequest_setProductsDelegate___org_xmlvm_iphone_SKProductsRequestDelegate 19

void __INIT_org_xmlvm_iphone_SKProductsRequest();
void __INIT_IMPL_org_xmlvm_iphone_SKProductsRequest();
void __DELETE_org_xmlvm_iphone_SKProductsRequest(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_SKProductsRequest(JAVA_OBJECT me);
JAVA_OBJECT __NEW_org_xmlvm_iphone_SKProductsRequest();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_SKProductsRequest();
void org_xmlvm_iphone_SKProductsRequest___INIT____java_util_Set(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 18
JAVA_OBJECT org_xmlvm_iphone_SKProductsRequest_getProductsDelegate__(JAVA_OBJECT me);
// Vtable index: 19
void org_xmlvm_iphone_SKProductsRequest_setProductsDelegate___org_xmlvm_iphone_SKProductsRequestDelegate(JAVA_OBJECT me, JAVA_OBJECT n1);

#endif
