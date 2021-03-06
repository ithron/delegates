#include "benchmark_worker.h"

int counter;

namespace bench
{
Worker::Worker(int s)
{
    counter = s;
}
int Worker::inc()
{
    return ++counter;
}
int Worker::dec()
{
    return --counter;
}
int Worker::incStatic()
{
    return ++counter;
}
int Worker::decStatic()
{
    return --counter;
}

} // namespace bench
