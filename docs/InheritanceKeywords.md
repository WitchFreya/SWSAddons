# Inheritance Keywords

Say you want to extend a base class but it has a property you don't want to include.

```cpp
class Base
{
    foo = 1;
    bar = 2;
};

class Extended : Base
{
    // we don't want foo
};
```

As tempting as it might be to try `delete`, unfortunately you cannot do this because the `delete` will cascade upward, like so:

```cpp
class Base
{
    foo = 1;
    bar = 2;
};

class Extended : Base
{
    delete foo;
};

// Base is now { bar = 2; };
```

Instead, you'll need to rewrite the base class *or* simply let the property dangle if it's harmless. You'll notice a lot of harmless properties like this in BI's classes.
