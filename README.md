# hpc

**What is *Good* Performance?**

Two fundamental requirements:
1. Must operate the GPU in the throughput-limited regime (not sensitive to Amdahl effects, D2H/H2D transfers, launch overheads, etc.)
2. Must attain high utilizatioin of the GPUs compute and/or bandwidth capabilities

**Roofline Model** is a throughput-oriented performance model
- Understand performance differences between Architectures, Programming Models, implementations, etc.
    - Why do some Architectures/Implementations move more data than others?
    - Why do some compilers outperform others?
- Predict performance on future machines / architectures
    - Set realistic performance expectations
    - Drive for HW/SW Co-Design
- Identify performance bottlenecks & motivate software optimizations
- Determine when we’re done optimizing code
    - Assess performance relative to machine capabilities
    - Track progress towards optimality
    - Motivate need for algorithmic changes
