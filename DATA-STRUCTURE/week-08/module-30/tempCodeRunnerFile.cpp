Freeing dynamically allocated memory
    for (int i = 0; i < n; i++)
    {
        delete allNodes[i];
    }