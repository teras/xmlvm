#include "xmlvm.h"
#include "org_xmlvm_iphone_UIBarButtonItem.h"
#include "org_xmlvm_iphone_UIPopoverController.h"
#include "org_xmlvm_iphone_UISplitViewController.h"
#include "org_xmlvm_iphone_UIViewController.h"

#include "org_xmlvm_iphone_UISplitViewControllerDelegate.h"

__TIB_DEFINITION_org_xmlvm_iphone_UISplitViewControllerDelegate __TIB_org_xmlvm_iphone_UISplitViewControllerDelegate = {
    0, // classInitializationBegan
    0, // classInitialized
    -1, // initializerThreadId
    __INIT_org_xmlvm_iphone_UISplitViewControllerDelegate, // classInitializer
    "org.xmlvm.iphone.UISplitViewControllerDelegate", // className
    "org.xmlvm.iphone", // package
    JAVA_NULL, // enclosingClassName
    JAVA_NULL, // enclosingMethodName
    JAVA_NULL, // signature
    (__TIB_DEFINITION_TEMPLATE*) &__TIB_java_lang_Object, // extends
    -1, // sizeInstance
    XMLVM_TYPE_INTERFACE};

JAVA_OBJECT __CLASS_org_xmlvm_iphone_UISplitViewControllerDelegate;
JAVA_OBJECT __CLASS_org_xmlvm_iphone_UISplitViewControllerDelegate_1ARRAY;
JAVA_OBJECT __CLASS_org_xmlvm_iphone_UISplitViewControllerDelegate_2ARRAY;
JAVA_OBJECT __CLASS_org_xmlvm_iphone_UISplitViewControllerDelegate_3ARRAY;

static XMLVM_FIELD_REFLECTION_DATA __field_reflection_data[] = {
};

static JAVA_OBJECT* __method0_arg_types[] = {
    &__CLASS_org_xmlvm_iphone_UISplitViewController,
    &__CLASS_org_xmlvm_iphone_UIViewController,
    &__CLASS_org_xmlvm_iphone_UIBarButtonItem,
    &__CLASS_org_xmlvm_iphone_UIPopoverController,
};

static JAVA_OBJECT* __method1_arg_types[] = {
    &__CLASS_org_xmlvm_iphone_UISplitViewController,
    &__CLASS_org_xmlvm_iphone_UIViewController,
    &__CLASS_org_xmlvm_iphone_UIBarButtonItem,
};

static JAVA_OBJECT* __method2_arg_types[] = {
    &__CLASS_org_xmlvm_iphone_UISplitViewController,
    &__CLASS_org_xmlvm_iphone_UIPopoverController,
    &__CLASS_org_xmlvm_iphone_UIViewController,
};

static JAVA_OBJECT* __method3_arg_types[] = {
    &__CLASS_org_xmlvm_iphone_UISplitViewController,
    &__CLASS_org_xmlvm_iphone_UIViewController,
    &__CLASS_int,
};

static XMLVM_METHOD_REFLECTION_DATA __method_reflection_data[] = {
    {"willHideViewController",
    &__method0_arg_types[0],
    sizeof(__method0_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "(Lorg/xmlvm/iphone/UISplitViewController;Lorg/xmlvm/iphone/UIViewController;Lorg/xmlvm/iphone/UIBarButtonItem;Lorg/xmlvm/iphone/UIPopoverController;)V",
    JAVA_NULL,
    JAVA_NULL},
    {"willShowViewController",
    &__method1_arg_types[0],
    sizeof(__method1_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "(Lorg/xmlvm/iphone/UISplitViewController;Lorg/xmlvm/iphone/UIViewController;Lorg/xmlvm/iphone/UIBarButtonItem;)V",
    JAVA_NULL,
    JAVA_NULL},
    {"popoverController",
    &__method2_arg_types[0],
    sizeof(__method2_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "(Lorg/xmlvm/iphone/UISplitViewController;Lorg/xmlvm/iphone/UIPopoverController;Lorg/xmlvm/iphone/UIViewController;)V",
    JAVA_NULL,
    JAVA_NULL},
    {"shouldHideViewController",
    &__method3_arg_types[0],
    sizeof(__method3_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "(Lorg/xmlvm/iphone/UISplitViewController;Lorg/xmlvm/iphone/UIViewController;I)Z",
    JAVA_NULL,
    JAVA_NULL},
};

void __INIT_org_xmlvm_iphone_UISplitViewControllerDelegate()
{
    staticInitializerLock(&__TIB_org_xmlvm_iphone_UISplitViewControllerDelegate);

    // While the static initializer mutex is locked, locally store the value of
    // whether class initialization began or not
    int initBegan = __TIB_org_xmlvm_iphone_UISplitViewControllerDelegate.classInitializationBegan;

    // Whether or not class initialization had already began, it has begun now
    __TIB_org_xmlvm_iphone_UISplitViewControllerDelegate.classInitializationBegan = 1;

    staticInitializerUnlock(&__TIB_org_xmlvm_iphone_UISplitViewControllerDelegate);

    JAVA_LONG curThreadId = (JAVA_LONG)pthread_self();
    if (initBegan) {
        if (__TIB_org_xmlvm_iphone_UISplitViewControllerDelegate.initializerThreadId != curThreadId) {
            // Busy wait until the other thread finishes initializing this class
            while (!__TIB_org_xmlvm_iphone_UISplitViewControllerDelegate.classInitialized) {
                // do nothing
            }
        }
    } else {
        __TIB_org_xmlvm_iphone_UISplitViewControllerDelegate.initializerThreadId = curThreadId;
        XMLVM_CLASS_USED("org.xmlvm.iphone.UISplitViewControllerDelegate")
        __INIT_IMPL_org_xmlvm_iphone_UISplitViewControllerDelegate();
    }
}

void __INIT_IMPL_org_xmlvm_iphone_UISplitViewControllerDelegate()
{
    __TIB_org_xmlvm_iphone_UISplitViewControllerDelegate.numInterfaces = 0;
    __TIB_org_xmlvm_iphone_UISplitViewControllerDelegate.declaredFields = &__field_reflection_data[0];
    __TIB_org_xmlvm_iphone_UISplitViewControllerDelegate.numDeclaredFields = sizeof(__field_reflection_data) / sizeof(XMLVM_FIELD_REFLECTION_DATA);
    //__TIB_org_xmlvm_iphone_UISplitViewControllerDelegate.methodDispatcherFunc = method_dispatcher;
    __TIB_org_xmlvm_iphone_UISplitViewControllerDelegate.declaredMethods = &__method_reflection_data[0];
    __TIB_org_xmlvm_iphone_UISplitViewControllerDelegate.numDeclaredMethods = sizeof(__method_reflection_data) / sizeof(XMLVM_METHOD_REFLECTION_DATA);

    __CLASS_org_xmlvm_iphone_UISplitViewControllerDelegate = XMLVM_CREATE_CLASS_OBJECT(&__TIB_org_xmlvm_iphone_UISplitViewControllerDelegate);
    __TIB_org_xmlvm_iphone_UISplitViewControllerDelegate.clazz = __CLASS_org_xmlvm_iphone_UISplitViewControllerDelegate;
    __TIB_org_xmlvm_iphone_UISplitViewControllerDelegate.baseType = JAVA_NULL;
    __CLASS_org_xmlvm_iphone_UISplitViewControllerDelegate_1ARRAY = XMLVM_CREATE_ARRAY_CLASS_OBJECT(__CLASS_org_xmlvm_iphone_UISplitViewControllerDelegate);
    __CLASS_org_xmlvm_iphone_UISplitViewControllerDelegate_2ARRAY = XMLVM_CREATE_ARRAY_CLASS_OBJECT(__CLASS_org_xmlvm_iphone_UISplitViewControllerDelegate_1ARRAY);
    __CLASS_org_xmlvm_iphone_UISplitViewControllerDelegate_3ARRAY = XMLVM_CREATE_ARRAY_CLASS_OBJECT(__CLASS_org_xmlvm_iphone_UISplitViewControllerDelegate_2ARRAY);

    __TIB_org_xmlvm_iphone_UISplitViewControllerDelegate.classInitialized = 1;
}

