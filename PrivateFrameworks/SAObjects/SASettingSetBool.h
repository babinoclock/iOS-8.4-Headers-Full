/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASettingSetValue.h>

@interface SASettingSetBool : SASettingSetValue

@property (assign,nonatomic) char toggle; 
@property (assign,nonatomic) char value; 
+(id)setBool;
+(id)setBoolWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(char)value;
-(void)setValue:(char)arg1 ;
-(id)encodedClassName;
-(char)requiresResponse;
-(char)toggle;
-(void)setToggle:(char)arg1 ;
@end
