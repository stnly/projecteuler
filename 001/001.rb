
t = 0

(0...1000).each do |i|
  if i%3 == 0 
    t += i
  elsif i%5 == 0
    t += i
  end 
end

puts t