/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OABTextBodyProperties : NSObject
+(void)readTextBodyProperties:(id)arg1 textBox:(const EshTextBox*)arg2 useDefaults:(BOOL)arg3 state:(id)arg4 ;
+(void)setTextFlow:(int)arg1 textBodyProperties:(id)arg2 ;
+(void)setTextDirection:(int)arg1 textBodyProperties:(id)arg2 ;
+(void)writeTextBodyProperties:(id)arg1 toShapeBase:(EshShapeBase*)arg2 state:(id)arg3 ;
+(void)setTextRotation:(int)arg1 textBodyProperties:(id)arg2 ;
+(void)setAutoFit:(BOOL)arg1 textBodyProperties:(id)arg2 ;
+(void)setWrap:(int)arg1 textBodyProperties:(id)arg2 ;
+(void)setTextAnchor:(int)arg1 textBodyProperties:(id)arg2 ;
+(void)setIsAnchorCenter:(int)arg1 textBodyProperties:(id)arg2 ;
@end
