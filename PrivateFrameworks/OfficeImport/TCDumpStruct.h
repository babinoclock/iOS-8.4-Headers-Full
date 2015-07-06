/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/TCDumpType.h>

@class NSString, NSMutableArray;

@interface TCDumpStruct : TCDumpType {

	long mSize;
	NSString* mSizeFieldName;
	long mSizeCorrection;
	NSMutableArray* mMembers;

}
-(void)dealloc;
-(void)fromBinary:(_sFILE*)arg1 toXml:(xmlNode*)arg2 state:(id)arg3 ;
-(id)initWithSize:(long)arg1 sizeFieldName:(id)arg2 sizeCorrection:(int)arg3 members:(id)arg4 ;
-(id)initWithMembers:(id)arg1 ;
-(id)initWithSize:(long)arg1 members:(id)arg2 ;
-(id)initWithSizeFieldName:(id)arg1 members:(id)arg2 ;
-(id)initWithSizeFieldName:(id)arg1 sizeCorrection:(int)arg2 members:(id)arg3 ;
@end

