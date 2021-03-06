package org.xmlvm.ios;
import java.util.*;

import org.xmlvm.XMLVMSkeletonOnly;
@XMLVMSkeletonOnly
public class UISwipeGestureRecognizer extends UIGestureRecognizer {

	/*
	 * Constructors
	 */
	public UISwipeGestureRecognizer(Object target, SEL action) {
		super(target, action);
	}

	/** Default constructor */
	public UISwipeGestureRecognizer() {
		super();
	}

	/*
	 * Properties
	 */

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

	/**
	 * @property(nonatomic) UISwipeGestureRecognizerDirection direction;
	 */
	public int getDirection(){
		throw new RuntimeException("Stub");
	}

	/**
	 * @property(nonatomic) UISwipeGestureRecognizerDirection direction;
	 */
	public void setDirection(int direction){
		throw new RuntimeException("Stub");
	}
}
