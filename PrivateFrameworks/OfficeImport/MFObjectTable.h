/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:39 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface MFObjectTable : NSObject {

	NSMutableArray* m_objects;

}
-(void)dealloc;
-(int)size;
-(id)init;
-(void)clear;
-(int)selectInto:(int)arg1 :(id)arg2 ;
-(int)putObject:(id)arg1 :(unsigned)arg2 ;
-(id)getObject:(unsigned)arg1 ;
-(unsigned)insertPos;
-(int)deleteObject:(unsigned)arg1 ;
@end
