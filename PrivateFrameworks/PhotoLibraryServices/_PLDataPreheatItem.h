/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLPreheatItem.h>

@class PLImageTable;

@interface _PLDataPreheatItem : PLPreheatItem {

	unsigned _thumbIndex;
	PLImageTable* _imageTable;

}
-(void)dealloc;
-(id)initWithThumbIndex:(unsigned)arg1 imageTable:(id)arg2 format:(int)arg3 optimalSourcePixelSize:(CGSize)arg4 ;
-(void)startPreheatRequestWithCompletionHandler:(/*^block*/id)arg1 ;
@end

