/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:39 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OADCachedTextStyle : NSObject {

	OADCachedTextStyleData mData;
	unsigned mHash;

}
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)initWithTextBodyProperties:(id)arg1 paragraphProperties:(id)arg2 characterProperties:(id)arg3 colorContext:(id)arg4 graphicStyleCache:(id)arg5 ;
-(void)applyToParagraphProperties:(id)arg1 graphicStyleCache:(id)arg2 ;
-(void)applyToTextBodyProperties:(id)arg1 graphicStyleCache:(id)arg2 ;
@end

