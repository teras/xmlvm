/* Copyright (c) 2002-2011 by XMLVM.org
 *
 * Project Info:  http://www.xmlvm.org
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301,
 * USA.
 */

#import "xmlvm.h"
#import <Foundation/Foundation.h>
#import "java_lang_String.h"



// NSBundle
//----------------------------------------------------------------------------
#define org_xmlvm_iphone_NSBundle NSBundle
@interface NSBundle (cat_NSBundle)

+ (NSBundle*) mainBundle__;
- (java_lang_String*) pathForResource___java_lang_String_java_lang_String: (java_lang_String*) resource
                                                                         : (java_lang_String*) type;
- (java_lang_String*) pathForResource___java_lang_String_java_lang_String_java_lang_String
																		 : (java_lang_String*) resource
                                                                         : (java_lang_String*) type
                                                                         : (java_lang_String*) directory;
- (NSString*) bundlePath__;

- (java_lang_String*) localizedStringForKey___java_lang_String_java_lang_String_java_lang_String:(java_lang_String*) key :(java_lang_String*) value :(java_lang_String*) tableName;

@end
