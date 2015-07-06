/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>
#import <OfficeImport/EDImmutableObject.h>

@class NSString;

@interface EDAlignmentInfo : NSObject <NSCopying, EDImmutableObject> {

	int mHorizontalAlignment;
	int mVerticalAlignment;
	int mIndent;
	int mTextRotation;
	BOOL mTextWrapped;
	BOOL mHorizontalAlignOverridden;
	BOOL mVerticalAlignOverridden;
	BOOL mIndentOverridden;
	BOOL mTextWrappedOveridden;
	BOOL mDoNotModify;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alignmentInfo;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isVerticalAlignOverridden;
-(void)setIndent:(int)arg1 ;
-(BOOL)isHorizontalAlignOverridden;
-(BOOL)isTextWrapped;
-(int)textRotation;
-(int)indent;
-(BOOL)isTextWrappedOverridden;
-(BOOL)isIndentOverridden;
-(char)isEqualToAlignmentInfo:(id)arg1 ;
-(void)setDoNotModify:(BOOL)arg1 ;
-(void)setTextWrapped:(BOOL)arg1 ;
-(void)setTextRotation:(int)arg1 ;
-(int)verticalAlignment;
-(void)setHorizontalAlignment:(int)arg1 ;
-(int)horizontalAlignment;
-(void)setVerticalAlignment:(int)arg1 ;
@end

