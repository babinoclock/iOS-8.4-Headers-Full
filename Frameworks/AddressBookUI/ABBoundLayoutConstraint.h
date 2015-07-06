/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSLayoutConstraint.h>

@class NSString;

@interface ABBoundLayoutConstraint : NSLayoutConstraint {

	id _object;
	NSString* _keyPath;

}

@property (assign,nonatomic) id object;                     //@synthesize object=_object - In the implementation block
@property (nonatomic,copy) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
+(id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 constantObject:(id)arg7 keyPath:(id)arg8 ;
-(void)unbind;
-(void)bindConstantToObject:(id)arg1 keyPath:(id)arg2 ;
-(void)_boundValueDidChange;
-(void)dealloc;
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
-(id)object;
-(void)setObject:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

