#ifndef __ORG_XMLVM_IPHONE_AVAUDIOPLAYER_AVAUDIOPLAYERLISTENER__
#define __ORG_XMLVM_IPHONE_AVAUDIOPLAYER_AVAUDIOPLAYERLISTENER__

#include "xmlvm.h"
#include "java_lang_Object.h"
#include "javazoom_jlgui_basicplayer_BasicPlayerListener.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_javazoom_jlgui_basicplayer_BasicPlayerListener
#define XMLVM_FORWARD_DECL_javazoom_jlgui_basicplayer_BasicPlayerListener
XMLVM_FORWARD_DECL(javazoom_jlgui_basicplayer_BasicPlayerListener)
#endif
#ifndef XMLVM_FORWARD_DECL_java_lang_Object
#define XMLVM_FORWARD_DECL_java_lang_Object
XMLVM_FORWARD_DECL(java_lang_Object)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_AVAudioPlayer
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_AVAudioPlayer
XMLVM_FORWARD_DECL(org_xmlvm_iphone_AVAudioPlayer)
#endif
// Class declarations for org.xmlvm.iphone.AVAudioPlayer$AVAudioPlayerListener
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_AVAudioPlayer_AVAudioPlayerListener, 11)

//XMLVM_BEGIN_MEMBERS
#define __ADDITIONAL_INSTANCE_MEMBERS_org_xmlvm_iphone_AVAudioPlayer_AVAudioPlayerListener
//XMLVM_END_MEMBERS

#define __INSTANCE_MEMBERS_org_xmlvm_iphone_AVAudioPlayer_AVAudioPlayerListener \
    __INSTANCE_MEMBERS_java_lang_Object; \
    struct { \
        JAVA_OBJECT this_0_; \
        __ADDITIONAL_INSTANCE_MEMBERS_org_xmlvm_iphone_AVAudioPlayer_AVAudioPlayerListener \
    } org_xmlvm_iphone_AVAudioPlayer_AVAudioPlayerListener

struct org_xmlvm_iphone_AVAudioPlayer_AVAudioPlayerListener {
    __CLASS_DEFINITION_org_xmlvm_iphone_AVAudioPlayer_AVAudioPlayerListener* __class;
    __INSTANCE_MEMBERS_org_xmlvm_iphone_AVAudioPlayer_AVAudioPlayerListener;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_AVAudioPlayer_AVAudioPlayerListener
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_AVAudioPlayer_AVAudioPlayerListener
typedef struct org_xmlvm_iphone_AVAudioPlayer_AVAudioPlayerListener org_xmlvm_iphone_AVAudioPlayer_AVAudioPlayerListener;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_AVAudioPlayer_AVAudioPlayerListener 11

void __INIT_org_xmlvm_iphone_AVAudioPlayer_AVAudioPlayerListener();
JAVA_OBJECT __NEW_org_xmlvm_iphone_AVAudioPlayer_AVAudioPlayerListener();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_AVAudioPlayer_AVAudioPlayerListener();
void org_xmlvm_iphone_AVAudioPlayer_AVAudioPlayerListener___INIT____org_xmlvm_iphone_AVAudioPlayer_org_xmlvm_iphone_AVAudioPlayer(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);

#endif
