/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSPropertyStoreMapping.h>

@interface NSAttributeStoreMapping : NSPropertyStoreMapping {

	int _externalType;
	unsigned _externalPrecision;
	int _externalScale;

}
-(id)sqlType;
-(void)setExternalType:(int)arg1 ;
-(void)setExternalPrecision:(unsigned)arg1 ;
-(void)setExternalScale:(int)arg1 ;
-(int)externalType;
-(unsigned)externalPrecision;
-(int)externalScale;
-(id)attribute;
-(id)columnDefinition;
-(char)isEqual:(id)arg1 ;
-(id)initWithProperty:(id)arg1 ;
@end

