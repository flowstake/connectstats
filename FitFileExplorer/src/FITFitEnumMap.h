//  MIT Licence
//
//  Created on 21/05/2016.
//
//  Copyright (c) 2016 Brice Rosenzweig.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//  
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//  
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.
//  

#import <Foundation/Foundation.h>
@class GCField;

@interface FITFitEnumMap : NSObject

/**
 Return definition for enums

 @param what name of the enum as NSString
 @param key Value in the enum
 @return NSString description for mapping key, or key as a string if not found
 */
+(nonnull NSString*)defsFor:(nonnull NSString*)what andKey:(nonnull NSNumber*)key;

/**
 activity Field or nil if not found. If activityType is not nil, will
 try to adapt to the activity type fields like cadence
 */
+(nullable GCField*)activityFieldFromFitField:(nonnull NSString*)fitfield forActivityType:(nullable NSString*)activityType;

@end
