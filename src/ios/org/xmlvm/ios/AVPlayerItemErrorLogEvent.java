package org.xmlvm.ios;
import java.util.*;

import org.xmlvm.XMLVMSkeletonOnly;
@XMLVMSkeletonOnly
public class AVPlayerItemErrorLogEvent extends NSObject {

	/*
	 * Constructors
	 */

	/** Default constructor */
	public AVPlayerItemErrorLogEvent() {
		super();
	}

	/*
	 * Properties
	 */

	/**
	 * @property(nonatomic, readonly) NSDate *date;
	 */
	public NSDate getDate(){
		throw new RuntimeException("Stub");
	}

	/**
	 * @property(nonatomic, readonly) NSString *URI;
	 */
	public String getURI(){
		throw new RuntimeException("Stub");
	}

	/**
	 * @property(nonatomic, readonly) NSString *serverAddress;
	 */
	public String getServerAddress(){
		throw new RuntimeException("Stub");
	}

	/**
	 * @property(nonatomic, readonly) NSString *playbackSessionID;
	 */
	public String getPlaybackSessionID(){
		throw new RuntimeException("Stub");
	}

	/**
	 * @property(nonatomic, readonly) NSInteger errorStatusCode;
	 */
	public int getErrorStatusCode(){
		throw new RuntimeException("Stub");
	}

	/**
	 * @property(nonatomic, readonly) NSString *errorDomain;
	 */
	public String getErrorDomain(){
		throw new RuntimeException("Stub");
	}

	/**
	 * @property(nonatomic, readonly) NSString *errorComment;
	 */
	public String getErrorComment(){
		throw new RuntimeException("Stub");
	}

	/*
	 * Interface Properties
	 */
}
