/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAVDrawable : NSObject
+(id)readDrawableFromNode:(xmlNode*)arg1 inNamespace:(id)arg2 state:(id)arg3 ;
+(xmlDoc*)vmlDocumentFromPart:(id)arg1 ;
+(void)readFromDrawable:(xmlNode*)arg1 toDrawable:(id)arg2 state:(id)arg3 ;
+(id)readDrawablesFromParent:(xmlNode*)arg1 inNamespace:(id)arg2 state:(id)arg3 ;
+(CGRect)readCoordBounds:(xmlNode*)arg1 ;
@end

