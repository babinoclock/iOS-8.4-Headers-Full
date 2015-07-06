/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSCoder.h>

@class NSMutableData;

@interface NSArchiver : NSCoder {

	void* mdata;
	void* pointerTable;
	void* stringTable;
	void* ids;
	void* map;
	void* replacementTable;
	void* reserved;

}

@property (retain,readonly) NSMutableData * archiverData; 
+(char)archiveRootObject:(id)arg1 toFile:(id)arg2 ;
+(void)encodeClassName:(id)arg1 intoClassName:(id)arg2 ;
+(id)classNameEncodedForTrueClassName:(id)arg1 ;
+(void)initialize;
+(id)archivedDataWithRootObject:(id)arg1 ;
-(void)encodeArrayOfObjCType:(const char*)arg1 count:(unsigned)arg2 at:(const void*)arg3 ;
-(void)encodeClassName:(id)arg1 intoClassName:(id)arg2 ;
-(void)encodeRootObject:(id)arg1 ;
-(id)classNameEncodedForTrueClassName:(id)arg1 ;
-(NSMutableData *)archiverData;
-(void)encodeValuesOfObjCTypes:(const char*)arg1 ;
-(void)encodeDataObject:(id)arg1 ;
-(void)encodeValueOfObjCType:(const char*)arg1 at:(const void*)arg2 ;
-(void)dealloc;
-(id)initForWritingWithMutableData:(id)arg1 ;
-(id)data;
-(void)replaceObject:(id)arg1 withObject:(id)arg2 ;
-(int)versionForClassName:(id)arg1 ;
-(void)encodeConditionalObject:(id)arg1 ;
-(void)encodeBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(void)encodeObject:(id)arg1 ;
-(void)finalize;
@end

