// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from task_scheduler.djinni

#import <Foundation/Foundation.h>
@protocol MCSchedulerInterface;
@protocol MCThreadPoolCallbacks;


@interface MCThreadPoolScheduler : NSObject

+ (nullable id<MCSchedulerInterface>)create:(nullable id<MCThreadPoolCallbacks>)callbacks;

@end
