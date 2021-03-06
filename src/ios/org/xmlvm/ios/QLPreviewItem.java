package org.xmlvm.ios;
import java.util.*;

import org.xmlvm.XMLVMSkeletonOnly;
@XMLVMSkeletonOnly
@org.xmlvm.XMLVMDelegate(protocolType = "QLPreviewItem")
public interface QLPreviewItem {

	/*
	 * Properties
	 */

	/**
	 * @property(readonly) NSURL * previewItemURL;
	 */
	public abstract NSURL getPreviewItemURL();

	/**
	 * @property(readonly) NSString * previewItemTitle;
	 */
	public abstract String getPreviewItemTitle();
}
