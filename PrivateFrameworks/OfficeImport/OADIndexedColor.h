/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADColor.h>

@interface OADIndexedColor : OADColor {

	unsigned mIndex;

}
+(id)indexedColorWithIndex:(unsigned)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)index;
-(id)initWithIndex:(unsigned)arg1 ;
-(id)colorFromPalette:(id)arg1 ;
@end

