#=
Heru Handika
18 September 2020
Euler's number implementation in julia
=#

using Printf

function calculate_factorial(n)
    if n == 0 || n == 1
        return 1
    else
        return n * calculate_factorial(n - 1)
    end
end

function main()
    euler_number::Float64 = 1.0
    for i = 1:10
        euler_number = euler_number + 1.0 / calculate_factorial(i)
    end
    @printf("Euler number: %.8f\n", euler_number)

end

if abspath(PROGRAM_FILE) == @__FILE__
    main()
end