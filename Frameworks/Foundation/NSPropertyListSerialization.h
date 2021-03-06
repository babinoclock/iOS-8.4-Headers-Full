/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface NSPropertyListSerialization : NSObject {

	void** reserved[6];

}
+(id)MCSafePropertyListWithData:(id)arg1 options:(unsigned)arg2 format:(unsigned*)arg3 error:(out id*)arg4 ;
+(char)propertyList:(id)arg1 isValidForFormat:(unsigned)arg2 ;
+(int)writePropertyList:(id)arg1 toStream:(id)arg2 format:(unsigned)arg3 options:(unsigned)arg4 error:(out id*)arg5 ;
+(id)propertyListWithStream:(id)arg1 options:(unsigned)arg2 format:(unsigned*)arg3 error:(out id*)arg4 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)propertyListWithData:(id)arg1 options:(unsigned)arg2 format:(unsigned*)arg3 error:(out id*)arg4 ;
+(id)dataWithPropertyList:(id)arg1 format:(unsigned)arg2 options:(unsigned)arg3 error:(out id*)arg4 ;
+(id)dataFromPropertyList:(id)arg1 format:(unsigned)arg2 errorDescription:(out id*)arg3 ;
+(id)propertyListFromData:(id)arg1 mutabilityOption:(unsigned)arg2 format:(unsigned*)arg3 errorDescription:(out id*)arg4 ;
-(id)init;
@end

