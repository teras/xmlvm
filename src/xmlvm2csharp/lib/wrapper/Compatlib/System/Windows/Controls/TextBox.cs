// Automatically generated by xmlvm2csharp (do not edit).

using org.xmlvm;
namespace Compatlib.System.Windows.Controls {
public class TextBox: global::Compatlib.System.Windows.Controls.Control {
public void @this(){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.Windows.Controls.TextBox: void <init>()]
    base.element = new global::System.Windows.Controls.TextBox();
//XMLVM_END_WRAPPER[Compatlib.System.Windows.Controls.TextBox: void <init>()]
}

public virtual global::System.Object getText(){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.Windows.Controls.TextBox: Compatlib.System.String getText()]
    string nativeText = ((global::System.Windows.Controls.TextBox)base.element).Text;
    java.lang.String temp = org.xmlvm._nUtil.toJavaString(nativeText);
    Compatlib.System.String compatText = new Compatlib.System.String();
    compatText.@this(temp);
    return compatText;
//XMLVM_END_WRAPPER[Compatlib.System.Windows.Controls.TextBox: Compatlib.System.String getText()]
}

public virtual void setText(global::Compatlib.System.String n1){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.Windows.Controls.TextBox: void setText(Compatlib.System.String)]
    ((global::System.Windows.Controls.TextBox)base.element).Text = org.xmlvm._nUtil.toNativeString(n1._fvalue);
//XMLVM_END_WRAPPER[Compatlib.System.Windows.Controls.TextBox: void setText(Compatlib.System.String)]
}

//XMLVM_BEGIN_WRAPPER[Compatlib.System.Windows.Controls.TextBox]
private Compatlib.System.String text;
//XMLVM_END_WRAPPER[Compatlib.System.Windows.Controls.TextBox]

} // end of class: TextBox

} // end of namespace: Compatlib.System.Windows.Controls
