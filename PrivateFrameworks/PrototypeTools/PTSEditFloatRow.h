/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PrototypeTools/PTSRow.h>

@interface PTSEditFloatRow : PTSRow {

	unsigned _precision;

}

@property (assign,nonatomic) unsigned precision;              //@synthesize precision=_precision - In the implementation block
-(unsigned)precision;
-(void)setPrecision:(unsigned)arg1 ;
-(id)between:(float)arg1 and:(float)arg2 ;
-(id)init;
-(id)precision:(unsigned)arg1 ;
-(void)updateWithRow:(id)arg1 ;
-(Class)rowTableViewCellClass;
@end

