/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKPassLibraryExportedInterface
@required
-(void)catalogChanged:(id)arg1 withNewPasses:(id)arg2;
-(void)removingPassesOfType:(unsigned)arg1 didUpdateWithProgress:(double)arg2;
-(void)removingPassesOfType:(unsigned)arg1 didFinishWithSuccess:(char)arg2;
-(void)passAdded:(id)arg1;
-(void)passUpdated:(id)arg1;
-(void)passRemoved:(id)arg1;

@end
