/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/NSCoding.h>
#import <UIKit/NSCopying.h>

@class NSString;

@interface _NSLayoutConstraintConstant : NSObject <NSCoding, NSCopying> {

	NSString* _symbolicValue;
	float _numericValue;

}

@property (nonatomic,copy,readonly) NSString * symbolicValue;              //@synthesize symbolicValue=_symbolicValue - In the implementation block
@property (nonatomic,readonly) float numericValue;                         //@synthesize numericValue=_numericValue - In the implementation block
+(id)constantWithSymbolicValue:(id)arg1 numericValue:(float)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSymbolicValue:(id)arg1 numericValue:(float)arg2 ;
-(NSString *)symbolicValue;
-(float)numericValue;
@end
