package org.xmlvm.ios;
import java.util.*;

import org.xmlvm.XMLVMSkeletonOnly;
@XMLVMSkeletonOnly
public class UITapGestureRecognizer extends UIGestureRecognizer {

	/*
	 * Constructors
	 */
	public UITapGestureRecognizer(Object target, SEL action) {
		super(target, action);
	}

	/** Default constructor */
	public UITapGestureRecognizer() {
		super();
	}

	/*
	 * Properties
	 */

	/**
	 * @property(nonatomic) NSUInteger numberOfTapsRequired;
	 */
	public int getNumberOfTapsRequired(){
		throw new RuntimeException("Stub");
	}

	/**
	 * @property(nonatomic) NSUInteger numberOfTapsRequired;
	 */
	public void setNumberOfTapsRequired(int numberOfTapsRequired){
		throw new RuntimeException("Stub");
	}

	/**
	 * @property(nonatomic) NSUInteger numberOfTouchesRequired;
	 */
	public int getNumberOfTouchesRequired(){
		throw new RuntimeException("Stub");
	}

	/**
	 * @property(nonatomic) NSUInteger numberOfTouchesRequired;
	 */
	public void setNumberOfTouchesRequired(int numberOfTouchesRequired){
		throw new RuntimeException("Stub");
	}
}
