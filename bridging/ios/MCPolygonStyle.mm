// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from polygon.djinni

#import "MCPolygonStyle.h"


@implementation MCPolygonStyle

- (nonnull instancetype)initWithColor:(nonnull MCColor *)color
                              opacity:(float)opacity
{
    if (self = [super init]) {
        _color = color;
        _opacity = opacity;
    }
    return self;
}

+ (nonnull instancetype)polygonStyleWithColor:(nonnull MCColor *)color
                                      opacity:(float)opacity
{
    return [(MCPolygonStyle*)[self alloc] initWithColor:color
                                                opacity:opacity];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p color:%@ opacity:%@>", self.class, (void *)self, self.color, @(self.opacity)];
}

@end