/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKPassLibraryDelegate <NSObject>
@optional
-(void)passLibrary:(id)arg1 receivedUpdatedCatalog:(id)arg2 passes:(id)arg3;
-(void)passLibrary:(id)arg1 removingPassesOfType:(unsigned)arg2 didUpdateWithProgress:(double)arg3;
-(void)passLibrary:(id)arg1 removingPassesOfType:(unsigned)arg2 didFinishWithSuccess:(char)arg3;

@end

