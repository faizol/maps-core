// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from loader.djinni

#import "MCDataLoaderResult.h"


@implementation MCDataLoaderResult

- (nonnull instancetype)initWithData:(nullable id<MCDataHolderInterface>)data
                                etag:(nullable NSString *)etag
                              status:(MCLoaderStatus)status
{
    if (self = [super init]) {
        _data = data;
        _etag = [etag copy];
        _status = status;
    }
    return self;
}

+ (nonnull instancetype)dataLoaderResultWithData:(nullable id<MCDataHolderInterface>)data
                                            etag:(nullable NSString *)etag
                                          status:(MCLoaderStatus)status
{
    return [(MCDataLoaderResult*)[self alloc] initWithData:data
                                                      etag:etag
                                                    status:status];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p data:%@ etag:%@ status:%@>", self.class, (void *)self, self.data, self.etag, @(self.status)];
}

@end