/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PHUpdateChangeRequest <PHChangeRequest>
@property (getter=isMutated,readonly) char mutated; 
@required
-(char)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2;
-(char)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
-(char)isMutated;
-(char)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2;

@end

